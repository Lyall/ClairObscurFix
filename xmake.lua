set_project("ClairObscurFix")
add_rules("mode.debug", "mode.release")
set_languages("cxxlatest", "clatest")
set_optimize("smallest")

  target("ClairObscurFix")
    set_kind("shared")
    add_files("src/*.cpp", "src/SDK/BP_jRPG_GM_Bootstrap_functions.cpp","src/SDK/MediaAssets_functions.cpp", "src/SDK/UMG_functions.cpp", "src/SDK/Engine_functions.cpp", "src/SDK/CoreUObject_functions.cpp", "src/SDK/Basic.cpp", "external/safetyhook/safetyhook.cpp", "external/safetyhook/Zydis.c")
    add_syslinks("user32")
    add_includedirs("external/spdlog/include", "external/inipp", "external/safetyhook")
    set_prefixname("")
    set_extension(".asi")
    
  -- Set platform specific toolchain
  if is_plat("windows") then
    set_toolchains("msvc")
    add_cxflags("/utf-8", "/GL")
    add_ldflags("/LTCG", "/OPT:REF", "/OPT:ICF") 
    if is_mode("release") then
      add_cxflags("/MT")
    elseif is_mode("debug") then
      add_cxflags("/MTd")
    end
  end
