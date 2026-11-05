#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025F048
// Address: 0x25f048 - 0x25fc7c
void sub_0025F048_0x25f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F048_0x25f048");
#endif

    switch (ctx->pc) {
        case 0x25f08cu: goto label_25f08c;
        case 0x25f0a4u: goto label_25f0a4;
        case 0x25f0bcu: goto label_25f0bc;
        case 0x25f0d4u: goto label_25f0d4;
        case 0x25f0ecu: goto label_25f0ec;
        case 0x25f104u: goto label_25f104;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f134u: goto label_25f134;
        case 0x25f14cu: goto label_25f14c;
        case 0x25f164u: goto label_25f164;
        case 0x25f17cu: goto label_25f17c;
        case 0x25f194u: goto label_25f194;
        case 0x25f1acu: goto label_25f1ac;
        case 0x25f1c4u: goto label_25f1c4;
        case 0x25f1dcu: goto label_25f1dc;
        case 0x25f1f4u: goto label_25f1f4;
        case 0x25f20cu: goto label_25f20c;
        case 0x25f224u: goto label_25f224;
        case 0x25f23cu: goto label_25f23c;
        case 0x25f254u: goto label_25f254;
        case 0x25f26cu: goto label_25f26c;
        case 0x25f284u: goto label_25f284;
        case 0x25f29cu: goto label_25f29c;
        case 0x25f2b4u: goto label_25f2b4;
        case 0x25f2ccu: goto label_25f2cc;
        case 0x25f2e4u: goto label_25f2e4;
        case 0x25f2fcu: goto label_25f2fc;
        case 0x25f314u: goto label_25f314;
        case 0x25f32cu: goto label_25f32c;
        case 0x25f344u: goto label_25f344;
        case 0x25f35cu: goto label_25f35c;
        case 0x25f374u: goto label_25f374;
        case 0x25f38cu: goto label_25f38c;
        case 0x25f3a4u: goto label_25f3a4;
        case 0x25f3bcu: goto label_25f3bc;
        case 0x25f3d4u: goto label_25f3d4;
        case 0x25f3ecu: goto label_25f3ec;
        case 0x25f404u: goto label_25f404;
        case 0x25f41cu: goto label_25f41c;
        case 0x25f434u: goto label_25f434;
        case 0x25f44cu: goto label_25f44c;
        case 0x25f464u: goto label_25f464;
        case 0x25f47cu: goto label_25f47c;
        case 0x25f494u: goto label_25f494;
        case 0x25f4acu: goto label_25f4ac;
        case 0x25f4c4u: goto label_25f4c4;
        case 0x25f4dcu: goto label_25f4dc;
        case 0x25f4f4u: goto label_25f4f4;
        case 0x25f50cu: goto label_25f50c;
        case 0x25f524u: goto label_25f524;
        case 0x25f53cu: goto label_25f53c;
        case 0x25f554u: goto label_25f554;
        case 0x25f56cu: goto label_25f56c;
        case 0x25f584u: goto label_25f584;
        case 0x25f59cu: goto label_25f59c;
        case 0x25f5b4u: goto label_25f5b4;
        case 0x25f5ccu: goto label_25f5cc;
        case 0x25f5e4u: goto label_25f5e4;
        case 0x25f5fcu: goto label_25f5fc;
        case 0x25f614u: goto label_25f614;
        case 0x25f62cu: goto label_25f62c;
        case 0x25f644u: goto label_25f644;
        case 0x25f65cu: goto label_25f65c;
        case 0x25f674u: goto label_25f674;
        case 0x25f68cu: goto label_25f68c;
        case 0x25f6a4u: goto label_25f6a4;
        case 0x25f6bcu: goto label_25f6bc;
        case 0x25f6d4u: goto label_25f6d4;
        case 0x25f6ecu: goto label_25f6ec;
        case 0x25f704u: goto label_25f704;
        case 0x25f71cu: goto label_25f71c;
        case 0x25f734u: goto label_25f734;
        case 0x25f74cu: goto label_25f74c;
        case 0x25f764u: goto label_25f764;
        case 0x25f77cu: goto label_25f77c;
        case 0x25f794u: goto label_25f794;
        case 0x25f7acu: goto label_25f7ac;
        case 0x25f7c4u: goto label_25f7c4;
        case 0x25f7dcu: goto label_25f7dc;
        case 0x25f7f4u: goto label_25f7f4;
        case 0x25f80cu: goto label_25f80c;
        case 0x25f824u: goto label_25f824;
        case 0x25f83cu: goto label_25f83c;
        case 0x25f854u: goto label_25f854;
        case 0x25f86cu: goto label_25f86c;
        case 0x25f884u: goto label_25f884;
        case 0x25f89cu: goto label_25f89c;
        case 0x25f8b4u: goto label_25f8b4;
        case 0x25f8ccu: goto label_25f8cc;
        case 0x25f8e4u: goto label_25f8e4;
        case 0x25f8fcu: goto label_25f8fc;
        case 0x25f914u: goto label_25f914;
        case 0x25f92cu: goto label_25f92c;
        case 0x25f944u: goto label_25f944;
        case 0x25f95cu: goto label_25f95c;
        case 0x25f974u: goto label_25f974;
        case 0x25f98cu: goto label_25f98c;
        case 0x25f9a4u: goto label_25f9a4;
        case 0x25f9bcu: goto label_25f9bc;
        case 0x25f9d4u: goto label_25f9d4;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa94u: goto label_25fa94;
        case 0x25faacu: goto label_25faac;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fadcu: goto label_25fadc;
        case 0x25faf4u: goto label_25faf4;
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb24u: goto label_25fb24;
        case 0x25fb3cu: goto label_25fb3c;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb6cu: goto label_25fb6c;
        case 0x25fb84u: goto label_25fb84;
        case 0x25fb9cu: goto label_25fb9c;
        case 0x25fbb4u: goto label_25fbb4;
        case 0x25fbccu: goto label_25fbcc;
        case 0x25fbe4u: goto label_25fbe4;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc14u: goto label_25fc14;
        case 0x25fc2cu: goto label_25fc2c;
        case 0x25fc44u: goto label_25fc44;
        case 0x25fc5cu: goto label_25fc5c;
        case 0x25fc74u: goto label_25fc74;
        default: break;
    }

    ctx->pc = 0x25f048u;

    // 0x25f048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f04c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25f04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f054: 0x2cc2008f  sltiu       $v0, $a2, 0x8F
    ctx->pc = 0x25f054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)143) ? 1 : 0);
    // 0x25f058: 0x10400308  beqz        $v0, . + 4 + (0x308 << 2)
    ctx->pc = 0x25F058u;
    {
        const bool branch_taken_0x25f058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F058u;
        // 0x25f05c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f058) {
            ctx->pc = 0x25FC7Cu;
            return;
        }
    }
    ctx->pc = 0x25F060u;
    // 0x25f060: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x25f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x25f064: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x25f064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25f068: 0x24427160  addiu       $v0, $v0, 0x7160
    ctx->pc = 0x25f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29024));
    // 0x25f06c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f070: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f074: 0x800008  jr          $a0
    ctx->pc = 0x25F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F07Cu: goto label_25f07c;
            case 0x25F094u: goto label_25f094;
            case 0x25F0ACu: goto label_25f0ac;
            case 0x25F0C4u: goto label_25f0c4;
            case 0x25F0DCu: goto label_25f0dc;
            case 0x25F0F4u: goto label_25f0f4;
            case 0x25F10Cu: goto label_25f10c;
            case 0x25F124u: goto label_25f124;
            case 0x25F13Cu: goto label_25f13c;
            case 0x25F154u: goto label_25f154;
            case 0x25F16Cu: goto label_25f16c;
            case 0x25F184u: goto label_25f184;
            case 0x25F19Cu: goto label_25f19c;
            case 0x25F1B4u: goto label_25f1b4;
            case 0x25F1CCu: goto label_25f1cc;
            case 0x25F1E4u: goto label_25f1e4;
            case 0x25F1FCu: goto label_25f1fc;
            case 0x25F214u: goto label_25f214;
            case 0x25F22Cu: goto label_25f22c;
            case 0x25F244u: goto label_25f244;
            case 0x25F25Cu: goto label_25f25c;
            case 0x25F274u: goto label_25f274;
            case 0x25F28Cu: goto label_25f28c;
            case 0x25F2A4u: goto label_25f2a4;
            case 0x25F2BCu: goto label_25f2bc;
            case 0x25F2D4u: goto label_25f2d4;
            case 0x25F2ECu: goto label_25f2ec;
            case 0x25F304u: goto label_25f304;
            case 0x25F31Cu: goto label_25f31c;
            case 0x25F334u: goto label_25f334;
            case 0x25F34Cu: goto label_25f34c;
            case 0x25F364u: goto label_25f364;
            case 0x25F37Cu: goto label_25f37c;
            case 0x25F394u: goto label_25f394;
            case 0x25F3ACu: goto label_25f3ac;
            case 0x25F3C4u: goto label_25f3c4;
            case 0x25F3DCu: goto label_25f3dc;
            case 0x25F3F4u: goto label_25f3f4;
            case 0x25F40Cu: goto label_25f40c;
            case 0x25F424u: goto label_25f424;
            case 0x25F43Cu: goto label_25f43c;
            case 0x25F454u: goto label_25f454;
            case 0x25F46Cu: goto label_25f46c;
            case 0x25F484u: goto label_25f484;
            case 0x25F49Cu: goto label_25f49c;
            case 0x25F4B4u: goto label_25f4b4;
            case 0x25F4CCu: goto label_25f4cc;
            case 0x25F4E4u: goto label_25f4e4;
            case 0x25F4FCu: goto label_25f4fc;
            case 0x25F514u: goto label_25f514;
            case 0x25F52Cu: goto label_25f52c;
            case 0x25F544u: goto label_25f544;
            case 0x25F55Cu: goto label_25f55c;
            case 0x25F574u: goto label_25f574;
            case 0x25F58Cu: goto label_25f58c;
            case 0x25F5A4u: goto label_25f5a4;
            case 0x25F5BCu: goto label_25f5bc;
            case 0x25F5D4u: goto label_25f5d4;
            case 0x25F5ECu: goto label_25f5ec;
            case 0x25F604u: goto label_25f604;
            case 0x25F61Cu: goto label_25f61c;
            case 0x25F634u: goto label_25f634;
            case 0x25F64Cu: goto label_25f64c;
            case 0x25F664u: goto label_25f664;
            case 0x25F67Cu: goto label_25f67c;
            case 0x25F694u: goto label_25f694;
            case 0x25F6ACu: goto label_25f6ac;
            case 0x25F6C4u: goto label_25f6c4;
            case 0x25F6DCu: goto label_25f6dc;
            case 0x25F6F4u: goto label_25f6f4;
            case 0x25F70Cu: goto label_25f70c;
            case 0x25F724u: goto label_25f724;
            case 0x25F73Cu: goto label_25f73c;
            case 0x25F754u: goto label_25f754;
            case 0x25F76Cu: goto label_25f76c;
            case 0x25F784u: goto label_25f784;
            case 0x25F79Cu: goto label_25f79c;
            case 0x25F7B4u: goto label_25f7b4;
            case 0x25F7CCu: goto label_25f7cc;
            case 0x25F7E4u: goto label_25f7e4;
            case 0x25F7FCu: goto label_25f7fc;
            case 0x25F814u: goto label_25f814;
            case 0x25F82Cu: goto label_25f82c;
            case 0x25F844u: goto label_25f844;
            case 0x25F85Cu: goto label_25f85c;
            case 0x25F874u: goto label_25f874;
            case 0x25F88Cu: goto label_25f88c;
            case 0x25F8A4u: goto label_25f8a4;
            case 0x25F8BCu: goto label_25f8bc;
            case 0x25F8D4u: goto label_25f8d4;
            case 0x25F8ECu: goto label_25f8ec;
            case 0x25F904u: goto label_25f904;
            case 0x25F91Cu: goto label_25f91c;
            case 0x25F934u: goto label_25f934;
            case 0x25F94Cu: goto label_25f94c;
            case 0x25F964u: goto label_25f964;
            case 0x25F97Cu: goto label_25f97c;
            case 0x25F994u: goto label_25f994;
            case 0x25F9ACu: goto label_25f9ac;
            case 0x25F9C4u: goto label_25f9c4;
            case 0x25F9DCu: goto label_25f9dc;
            case 0x25F9F4u: goto label_25f9f4;
            case 0x25FA0Cu: goto label_25fa0c;
            case 0x25FA24u: goto label_25fa24;
            case 0x25FA3Cu: goto label_25fa3c;
            case 0x25FA54u: goto label_25fa54;
            case 0x25FA6Cu: goto label_25fa6c;
            case 0x25FA84u: goto label_25fa84;
            case 0x25FA9Cu: goto label_25fa9c;
            case 0x25FAB4u: goto label_25fab4;
            case 0x25FACCu: goto label_25facc;
            case 0x25FAE4u: goto label_25fae4;
            case 0x25FAFCu: goto label_25fafc;
            case 0x25FB14u: goto label_25fb14;
            case 0x25FB2Cu: goto label_25fb2c;
            case 0x25FB44u: goto label_25fb44;
            case 0x25FB5Cu: goto label_25fb5c;
            case 0x25FB74u: goto label_25fb74;
            case 0x25FB8Cu: goto label_25fb8c;
            case 0x25FBA4u: goto label_25fba4;
            case 0x25FBBCu: goto label_25fbbc;
            case 0x25FBD4u: goto label_25fbd4;
            case 0x25FBECu: goto label_25fbec;
            case 0x25FC04u: goto label_25fc04;
            case 0x25FC1Cu: goto label_25fc1c;
            case 0x25FC34u: goto label_25fc34;
            case 0x25FC4Cu: goto label_25fc4c;
            case 0x25FC64u: goto label_25fc64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25F07Cu;
label_25f07c:
    // 0x25f07c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f080: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f084: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F084u;
    SET_GPR_U32(ctx, 31, 0x25F08Cu);
    ctx->pc = 0x25F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F084u;
    // 0x25f088: 0x24a56830  addiu       $a1, $a1, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F084u, 0x25F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F08Cu;
label_25f08c:
    // 0x25f08c: 0x10000300  b           . + 4 + (0x300 << 2)
    ctx->pc = 0x25F08Cu;
    {
        const bool branch_taken_0x25f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F08Cu;
        // 0x25f090: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f08c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F094u;
label_25f094:
    // 0x25f094: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f098: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f09c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F09Cu;
    SET_GPR_U32(ctx, 31, 0x25F0A4u);
    ctx->pc = 0x25F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F09Cu;
    // 0x25f0a0: 0x24a56840  addiu       $a1, $a1, 0x6840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F09Cu, 0x25F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0A4u;
label_25f0a4:
    // 0x25f0a4: 0x100002fa  b           . + 4 + (0x2FA << 2)
    ctx->pc = 0x25F0A4u;
    {
        const bool branch_taken_0x25f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0A4u;
        // 0x25f0a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0a4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F0ACu;
label_25f0ac:
    // 0x25f0ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f0b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0b4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F0B4u;
    SET_GPR_U32(ctx, 31, 0x25F0BCu);
    ctx->pc = 0x25F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0B4u;
    // 0x25f0b8: 0x24a56850  addiu       $a1, $a1, 0x6850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F0B4u, 0x25F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0BCu;
label_25f0bc:
    // 0x25f0bc: 0x100002f4  b           . + 4 + (0x2F4 << 2)
    ctx->pc = 0x25F0BCu;
    {
        const bool branch_taken_0x25f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0BCu;
        // 0x25f0c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0bc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F0C4u;
label_25f0c4:
    // 0x25f0c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f0c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0cc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F0CCu;
    SET_GPR_U32(ctx, 31, 0x25F0D4u);
    ctx->pc = 0x25F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0CCu;
    // 0x25f0d0: 0x24a56868  addiu       $a1, $a1, 0x6868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F0CCu, 0x25F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0D4u;
label_25f0d4:
    // 0x25f0d4: 0x100002ee  b           . + 4 + (0x2EE << 2)
    ctx->pc = 0x25F0D4u;
    {
        const bool branch_taken_0x25f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0D4u;
        // 0x25f0d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0d4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F0DCu;
label_25f0dc:
    // 0x25f0dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f0e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0e4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F0E4u;
    SET_GPR_U32(ctx, 31, 0x25F0ECu);
    ctx->pc = 0x25F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0E4u;
    // 0x25f0e8: 0x24a56878  addiu       $a1, $a1, 0x6878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F0E4u, 0x25F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0ECu;
label_25f0ec:
    // 0x25f0ec: 0x100002e8  b           . + 4 + (0x2E8 << 2)
    ctx->pc = 0x25F0ECu;
    {
        const bool branch_taken_0x25f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0ECu;
        // 0x25f0f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0ec) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F0F4u;
label_25f0f4:
    // 0x25f0f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f0f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0fc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F0FCu;
    SET_GPR_U32(ctx, 31, 0x25F104u);
    ctx->pc = 0x25F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0FCu;
    // 0x25f100: 0x24a56888  addiu       $a1, $a1, 0x6888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F0FCu, 0x25F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F104u;
label_25f104:
    // 0x25f104: 0x100002e2  b           . + 4 + (0x2E2 << 2)
    ctx->pc = 0x25F104u;
    {
        const bool branch_taken_0x25f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F104u;
        // 0x25f108: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f104) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F10Cu;
label_25f10c:
    // 0x25f10c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f110: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f114: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F114u;
    SET_GPR_U32(ctx, 31, 0x25F11Cu);
    ctx->pc = 0x25F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F114u;
    // 0x25f118: 0x24a56898  addiu       $a1, $a1, 0x6898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F114u, 0x25F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F11Cu;
label_25f11c:
    // 0x25f11c: 0x100002dc  b           . + 4 + (0x2DC << 2)
    ctx->pc = 0x25F11Cu;
    {
        const bool branch_taken_0x25f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F11Cu;
        // 0x25f120: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f11c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F124u;
label_25f124:
    // 0x25f124: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f128: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f12c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F12Cu;
    SET_GPR_U32(ctx, 31, 0x25F134u);
    ctx->pc = 0x25F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F12Cu;
    // 0x25f130: 0x24a568a8  addiu       $a1, $a1, 0x68A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F12Cu, 0x25F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F134u;
label_25f134:
    // 0x25f134: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x25F134u;
    {
        const bool branch_taken_0x25f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F134u;
        // 0x25f138: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f134) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F13Cu;
label_25f13c:
    // 0x25f13c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f140: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f144: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F144u;
    SET_GPR_U32(ctx, 31, 0x25F14Cu);
    ctx->pc = 0x25F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F144u;
    // 0x25f148: 0x24a568c0  addiu       $a1, $a1, 0x68C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F144u, 0x25F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F14Cu;
label_25f14c:
    // 0x25f14c: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x25F14Cu;
    {
        const bool branch_taken_0x25f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F14Cu;
        // 0x25f150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f14c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F154u;
label_25f154:
    // 0x25f154: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f158: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f15c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F15Cu;
    SET_GPR_U32(ctx, 31, 0x25F164u);
    ctx->pc = 0x25F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F15Cu;
    // 0x25f160: 0x24a568d8  addiu       $a1, $a1, 0x68D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F15Cu, 0x25F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F164u;
label_25f164:
    // 0x25f164: 0x100002ca  b           . + 4 + (0x2CA << 2)
    ctx->pc = 0x25F164u;
    {
        const bool branch_taken_0x25f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F164u;
        // 0x25f168: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f164) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F16Cu;
label_25f16c:
    // 0x25f16c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f170: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f174: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F174u;
    SET_GPR_U32(ctx, 31, 0x25F17Cu);
    ctx->pc = 0x25F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F174u;
    // 0x25f178: 0x24a568f0  addiu       $a1, $a1, 0x68F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F174u, 0x25F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F17Cu;
label_25f17c:
    // 0x25f17c: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x25F17Cu;
    {
        const bool branch_taken_0x25f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F17Cu;
        // 0x25f180: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f17c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F184u;
label_25f184:
    // 0x25f184: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f188: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f18c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F18Cu;
    SET_GPR_U32(ctx, 31, 0x25F194u);
    ctx->pc = 0x25F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F18Cu;
    // 0x25f190: 0x24a56908  addiu       $a1, $a1, 0x6908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F18Cu, 0x25F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F194u;
label_25f194:
    // 0x25f194: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x25F194u;
    {
        const bool branch_taken_0x25f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F194u;
        // 0x25f198: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f194) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F19Cu;
label_25f19c:
    // 0x25f19c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f1a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1a4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F1A4u;
    SET_GPR_U32(ctx, 31, 0x25F1ACu);
    ctx->pc = 0x25F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1A4u;
    // 0x25f1a8: 0x24a56920  addiu       $a1, $a1, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F1A4u, 0x25F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1ACu;
label_25f1ac:
    // 0x25f1ac: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x25F1ACu;
    {
        const bool branch_taken_0x25f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1ACu;
        // 0x25f1b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1ac) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F1B4u;
label_25f1b4:
    // 0x25f1b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f1b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1bc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F1BCu;
    SET_GPR_U32(ctx, 31, 0x25F1C4u);
    ctx->pc = 0x25F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1BCu;
    // 0x25f1c0: 0x24a56938  addiu       $a1, $a1, 0x6938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F1BCu, 0x25F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1C4u;
label_25f1c4:
    // 0x25f1c4: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x25F1C4u;
    {
        const bool branch_taken_0x25f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1C4u;
        // 0x25f1c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1c4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F1CCu;
label_25f1cc:
    // 0x25f1cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f1d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1d4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F1D4u;
    SET_GPR_U32(ctx, 31, 0x25F1DCu);
    ctx->pc = 0x25F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1D4u;
    // 0x25f1d8: 0x24a56950  addiu       $a1, $a1, 0x6950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F1D4u, 0x25F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1DCu;
label_25f1dc:
    // 0x25f1dc: 0x100002ac  b           . + 4 + (0x2AC << 2)
    ctx->pc = 0x25F1DCu;
    {
        const bool branch_taken_0x25f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1DCu;
        // 0x25f1e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1dc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F1E4u;
label_25f1e4:
    // 0x25f1e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f1e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1ec: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F1ECu;
    SET_GPR_U32(ctx, 31, 0x25F1F4u);
    ctx->pc = 0x25F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1ECu;
    // 0x25f1f0: 0x24a56968  addiu       $a1, $a1, 0x6968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F1ECu, 0x25F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1F4u;
label_25f1f4:
    // 0x25f1f4: 0x100002a6  b           . + 4 + (0x2A6 << 2)
    ctx->pc = 0x25F1F4u;
    {
        const bool branch_taken_0x25f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1F4u;
        // 0x25f1f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1f4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F1FCu;
label_25f1fc:
    // 0x25f1fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f200: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f204: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F204u;
    SET_GPR_U32(ctx, 31, 0x25F20Cu);
    ctx->pc = 0x25F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F204u;
    // 0x25f208: 0x24a56970  addiu       $a1, $a1, 0x6970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F204u, 0x25F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F20Cu;
label_25f20c:
    // 0x25f20c: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x25F20Cu;
    {
        const bool branch_taken_0x25f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F20Cu;
        // 0x25f210: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f20c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F214u;
label_25f214:
    // 0x25f214: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f218: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f21c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F21Cu;
    SET_GPR_U32(ctx, 31, 0x25F224u);
    ctx->pc = 0x25F220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F21Cu;
    // 0x25f220: 0x24a56980  addiu       $a1, $a1, 0x6980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F21Cu, 0x25F224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F224u;
label_25f224:
    // 0x25f224: 0x1000029a  b           . + 4 + (0x29A << 2)
    ctx->pc = 0x25F224u;
    {
        const bool branch_taken_0x25f224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F224u;
        // 0x25f228: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f224) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F22Cu;
label_25f22c:
    // 0x25f22c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f230: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f234: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F234u;
    SET_GPR_U32(ctx, 31, 0x25F23Cu);
    ctx->pc = 0x25F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F234u;
    // 0x25f238: 0x24a56990  addiu       $a1, $a1, 0x6990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F234u, 0x25F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F23Cu;
label_25f23c:
    // 0x25f23c: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x25F23Cu;
    {
        const bool branch_taken_0x25f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F23Cu;
        // 0x25f240: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f23c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F244u;
label_25f244:
    // 0x25f244: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f248: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f24c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F24Cu;
    SET_GPR_U32(ctx, 31, 0x25F254u);
    ctx->pc = 0x25F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F24Cu;
    // 0x25f250: 0x24a569a0  addiu       $a1, $a1, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F24Cu, 0x25F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F254u;
label_25f254:
    // 0x25f254: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x25F254u;
    {
        const bool branch_taken_0x25f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F254u;
        // 0x25f258: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f254) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F25Cu;
label_25f25c:
    // 0x25f25c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f260: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f264: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F264u;
    SET_GPR_U32(ctx, 31, 0x25F26Cu);
    ctx->pc = 0x25F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F264u;
    // 0x25f268: 0x24a569b8  addiu       $a1, $a1, 0x69B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F264u, 0x25F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F26Cu;
label_25f26c:
    // 0x25f26c: 0x10000288  b           . + 4 + (0x288 << 2)
    ctx->pc = 0x25F26Cu;
    {
        const bool branch_taken_0x25f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F26Cu;
        // 0x25f270: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f26c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F274u;
label_25f274:
    // 0x25f274: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f278: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f27c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F27Cu;
    SET_GPR_U32(ctx, 31, 0x25F284u);
    ctx->pc = 0x25F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F27Cu;
    // 0x25f280: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F27Cu, 0x25F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F284u;
label_25f284:
    // 0x25f284: 0x10000282  b           . + 4 + (0x282 << 2)
    ctx->pc = 0x25F284u;
    {
        const bool branch_taken_0x25f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F284u;
        // 0x25f288: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f284) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F28Cu;
label_25f28c:
    // 0x25f28c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f290: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f294: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F294u;
    SET_GPR_U32(ctx, 31, 0x25F29Cu);
    ctx->pc = 0x25F298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F294u;
    // 0x25f298: 0x24a569e8  addiu       $a1, $a1, 0x69E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F294u, 0x25F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F29Cu;
label_25f29c:
    // 0x25f29c: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x25F29Cu;
    {
        const bool branch_taken_0x25f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F29Cu;
        // 0x25f2a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f29c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F2A4u;
label_25f2a4:
    // 0x25f2a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f2a8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2ac: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F2ACu;
    SET_GPR_U32(ctx, 31, 0x25F2B4u);
    ctx->pc = 0x25F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2ACu;
    // 0x25f2b0: 0x24a569f8  addiu       $a1, $a1, 0x69F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F2ACu, 0x25F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2B4u;
label_25f2b4:
    // 0x25f2b4: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x25F2B4u;
    {
        const bool branch_taken_0x25f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2B4u;
        // 0x25f2b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2b4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F2BCu;
label_25f2bc:
    // 0x25f2bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f2c0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2c4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F2C4u;
    SET_GPR_U32(ctx, 31, 0x25F2CCu);
    ctx->pc = 0x25F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2C4u;
    // 0x25f2c8: 0x24a56a08  addiu       $a1, $a1, 0x6A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F2C4u, 0x25F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2CCu;
label_25f2cc:
    // 0x25f2cc: 0x10000270  b           . + 4 + (0x270 << 2)
    ctx->pc = 0x25F2CCu;
    {
        const bool branch_taken_0x25f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2CCu;
        // 0x25f2d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2cc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F2D4u;
label_25f2d4:
    // 0x25f2d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f2d8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2dc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F2DCu;
    SET_GPR_U32(ctx, 31, 0x25F2E4u);
    ctx->pc = 0x25F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2DCu;
    // 0x25f2e0: 0x24a56a18  addiu       $a1, $a1, 0x6A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F2DCu, 0x25F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2E4u;
label_25f2e4:
    // 0x25f2e4: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x25F2E4u;
    {
        const bool branch_taken_0x25f2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2E4u;
        // 0x25f2e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2e4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F2ECu;
label_25f2ec:
    // 0x25f2ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f2f0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2f4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F2F4u;
    SET_GPR_U32(ctx, 31, 0x25F2FCu);
    ctx->pc = 0x25F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2F4u;
    // 0x25f2f8: 0x24a56a28  addiu       $a1, $a1, 0x6A28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F2F4u, 0x25F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2FCu;
label_25f2fc:
    // 0x25f2fc: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x25F2FCu;
    {
        const bool branch_taken_0x25f2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2FCu;
        // 0x25f300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2fc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F304u;
label_25f304:
    // 0x25f304: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f308: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f30c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F30Cu;
    SET_GPR_U32(ctx, 31, 0x25F314u);
    ctx->pc = 0x25F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F30Cu;
    // 0x25f310: 0x24a56a38  addiu       $a1, $a1, 0x6A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F30Cu, 0x25F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F314u;
label_25f314:
    // 0x25f314: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x25F314u;
    {
        const bool branch_taken_0x25f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F314u;
        // 0x25f318: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f314) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F31Cu;
label_25f31c:
    // 0x25f31c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f320: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f324: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F324u;
    SET_GPR_U32(ctx, 31, 0x25F32Cu);
    ctx->pc = 0x25F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F324u;
    // 0x25f328: 0x24a56a48  addiu       $a1, $a1, 0x6A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F324u, 0x25F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F32Cu;
label_25f32c:
    // 0x25f32c: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x25F32Cu;
    {
        const bool branch_taken_0x25f32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F32Cu;
        // 0x25f330: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f32c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F334u;
label_25f334:
    // 0x25f334: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f338: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f33c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F33Cu;
    SET_GPR_U32(ctx, 31, 0x25F344u);
    ctx->pc = 0x25F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F33Cu;
    // 0x25f340: 0x24a56a58  addiu       $a1, $a1, 0x6A58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F33Cu, 0x25F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F344u;
label_25f344:
    // 0x25f344: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x25F344u;
    {
        const bool branch_taken_0x25f344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F344u;
        // 0x25f348: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f344) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F34Cu;
label_25f34c:
    // 0x25f34c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f350: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f354: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F354u;
    SET_GPR_U32(ctx, 31, 0x25F35Cu);
    ctx->pc = 0x25F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F354u;
    // 0x25f358: 0x24a56a68  addiu       $a1, $a1, 0x6A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F354u, 0x25F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F35Cu;
label_25f35c:
    // 0x25f35c: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x25F35Cu;
    {
        const bool branch_taken_0x25f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F35Cu;
        // 0x25f360: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f35c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F364u;
label_25f364:
    // 0x25f364: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f368: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f36c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F36Cu;
    SET_GPR_U32(ctx, 31, 0x25F374u);
    ctx->pc = 0x25F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F36Cu;
    // 0x25f370: 0x24a56a78  addiu       $a1, $a1, 0x6A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F36Cu, 0x25F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F374u;
label_25f374:
    // 0x25f374: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x25F374u;
    {
        const bool branch_taken_0x25f374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F374u;
        // 0x25f378: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f374) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F37Cu;
label_25f37c:
    // 0x25f37c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f380: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f384: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F384u;
    SET_GPR_U32(ctx, 31, 0x25F38Cu);
    ctx->pc = 0x25F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F384u;
    // 0x25f388: 0x24a56a88  addiu       $a1, $a1, 0x6A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F384u, 0x25F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F38Cu;
label_25f38c:
    // 0x25f38c: 0x10000240  b           . + 4 + (0x240 << 2)
    ctx->pc = 0x25F38Cu;
    {
        const bool branch_taken_0x25f38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F38Cu;
        // 0x25f390: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f38c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F394u;
label_25f394:
    // 0x25f394: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f398: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f39c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F39Cu;
    SET_GPR_U32(ctx, 31, 0x25F3A4u);
    ctx->pc = 0x25F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F39Cu;
    // 0x25f3a0: 0x24a56a98  addiu       $a1, $a1, 0x6A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F39Cu, 0x25F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3A4u;
label_25f3a4:
    // 0x25f3a4: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x25F3A4u;
    {
        const bool branch_taken_0x25f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3A4u;
        // 0x25f3a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3a4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F3ACu;
label_25f3ac:
    // 0x25f3ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f3b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3b4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F3B4u;
    SET_GPR_U32(ctx, 31, 0x25F3BCu);
    ctx->pc = 0x25F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3B4u;
    // 0x25f3b8: 0x24a56aa8  addiu       $a1, $a1, 0x6AA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F3B4u, 0x25F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3BCu;
label_25f3bc:
    // 0x25f3bc: 0x10000234  b           . + 4 + (0x234 << 2)
    ctx->pc = 0x25F3BCu;
    {
        const bool branch_taken_0x25f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3BCu;
        // 0x25f3c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3bc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F3C4u;
label_25f3c4:
    // 0x25f3c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f3c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3cc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F3CCu;
    SET_GPR_U32(ctx, 31, 0x25F3D4u);
    ctx->pc = 0x25F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3CCu;
    // 0x25f3d0: 0x24a56ab8  addiu       $a1, $a1, 0x6AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F3CCu, 0x25F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3D4u;
label_25f3d4:
    // 0x25f3d4: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x25F3D4u;
    {
        const bool branch_taken_0x25f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3D4u;
        // 0x25f3d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3d4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F3DCu;
label_25f3dc:
    // 0x25f3dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f3e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3e4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F3E4u;
    SET_GPR_U32(ctx, 31, 0x25F3ECu);
    ctx->pc = 0x25F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3E4u;
    // 0x25f3e8: 0x24a56ac8  addiu       $a1, $a1, 0x6AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F3E4u, 0x25F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3ECu;
label_25f3ec:
    // 0x25f3ec: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x25F3ECu;
    {
        const bool branch_taken_0x25f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3ECu;
        // 0x25f3f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3ec) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F3F4u;
label_25f3f4:
    // 0x25f3f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f3f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3fc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F3FCu;
    SET_GPR_U32(ctx, 31, 0x25F404u);
    ctx->pc = 0x25F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3FCu;
    // 0x25f400: 0x24a56ad8  addiu       $a1, $a1, 0x6AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F3FCu, 0x25F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F404u;
label_25f404:
    // 0x25f404: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x25F404u;
    {
        const bool branch_taken_0x25f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F404u;
        // 0x25f408: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f404) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F40Cu;
label_25f40c:
    // 0x25f40c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f410: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f414: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F414u;
    SET_GPR_U32(ctx, 31, 0x25F41Cu);
    ctx->pc = 0x25F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F414u;
    // 0x25f418: 0x24a56ae8  addiu       $a1, $a1, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F414u, 0x25F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F41Cu;
label_25f41c:
    // 0x25f41c: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x25F41Cu;
    {
        const bool branch_taken_0x25f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F41Cu;
        // 0x25f420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f41c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F424u;
label_25f424:
    // 0x25f424: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f428: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f42c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F42Cu;
    SET_GPR_U32(ctx, 31, 0x25F434u);
    ctx->pc = 0x25F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F42Cu;
    // 0x25f430: 0x24a56af8  addiu       $a1, $a1, 0x6AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F42Cu, 0x25F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F434u;
label_25f434:
    // 0x25f434: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x25F434u;
    {
        const bool branch_taken_0x25f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F434u;
        // 0x25f438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f434) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F43Cu;
label_25f43c:
    // 0x25f43c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f440: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f444: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F444u;
    SET_GPR_U32(ctx, 31, 0x25F44Cu);
    ctx->pc = 0x25F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F444u;
    // 0x25f448: 0x24a56b08  addiu       $a1, $a1, 0x6B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F444u, 0x25F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F44Cu;
label_25f44c:
    // 0x25f44c: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x25F44Cu;
    {
        const bool branch_taken_0x25f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F44Cu;
        // 0x25f450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f44c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F454u;
label_25f454:
    // 0x25f454: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f458: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f45c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F45Cu;
    SET_GPR_U32(ctx, 31, 0x25F464u);
    ctx->pc = 0x25F460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F45Cu;
    // 0x25f460: 0x24a56b20  addiu       $a1, $a1, 0x6B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F45Cu, 0x25F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F464u;
label_25f464:
    // 0x25f464: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x25F464u;
    {
        const bool branch_taken_0x25f464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F464u;
        // 0x25f468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f464) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F46Cu;
label_25f46c:
    // 0x25f46c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f470: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f474: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F474u;
    SET_GPR_U32(ctx, 31, 0x25F47Cu);
    ctx->pc = 0x25F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F474u;
    // 0x25f478: 0x24a56b38  addiu       $a1, $a1, 0x6B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F474u, 0x25F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F47Cu;
label_25f47c:
    // 0x25f47c: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x25F47Cu;
    {
        const bool branch_taken_0x25f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F47Cu;
        // 0x25f480: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f47c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F484u;
label_25f484:
    // 0x25f484: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f488: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f48c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F48Cu;
    SET_GPR_U32(ctx, 31, 0x25F494u);
    ctx->pc = 0x25F490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F48Cu;
    // 0x25f490: 0x24a56b48  addiu       $a1, $a1, 0x6B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F48Cu, 0x25F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F494u;
label_25f494:
    // 0x25f494: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x25F494u;
    {
        const bool branch_taken_0x25f494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F494u;
        // 0x25f498: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f494) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F49Cu;
label_25f49c:
    // 0x25f49c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f4a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4a4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F4A4u;
    SET_GPR_U32(ctx, 31, 0x25F4ACu);
    ctx->pc = 0x25F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4A4u;
    // 0x25f4a8: 0x24a56b58  addiu       $a1, $a1, 0x6B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F4A4u, 0x25F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4ACu;
label_25f4ac:
    // 0x25f4ac: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x25F4ACu;
    {
        const bool branch_taken_0x25f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4ACu;
        // 0x25f4b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4ac) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F4B4u;
label_25f4b4:
    // 0x25f4b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f4b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4bc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F4BCu;
    SET_GPR_U32(ctx, 31, 0x25F4C4u);
    ctx->pc = 0x25F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4BCu;
    // 0x25f4c0: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F4BCu, 0x25F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4C4u;
label_25f4c4:
    // 0x25f4c4: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x25F4C4u;
    {
        const bool branch_taken_0x25f4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4C4u;
        // 0x25f4c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4c4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F4CCu;
label_25f4cc:
    // 0x25f4cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f4d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4d4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F4D4u;
    SET_GPR_U32(ctx, 31, 0x25F4DCu);
    ctx->pc = 0x25F4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4D4u;
    // 0x25f4d8: 0x24a56b80  addiu       $a1, $a1, 0x6B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F4D4u, 0x25F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4DCu;
label_25f4dc:
    // 0x25f4dc: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x25F4DCu;
    {
        const bool branch_taken_0x25f4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4DCu;
        // 0x25f4e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4dc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F4E4u;
label_25f4e4:
    // 0x25f4e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f4e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4ec: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F4ECu;
    SET_GPR_U32(ctx, 31, 0x25F4F4u);
    ctx->pc = 0x25F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4ECu;
    // 0x25f4f0: 0x24a56b90  addiu       $a1, $a1, 0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F4ECu, 0x25F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4F4u;
label_25f4f4:
    // 0x25f4f4: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x25F4F4u;
    {
        const bool branch_taken_0x25f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4F4u;
        // 0x25f4f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4f4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F4FCu;
label_25f4fc:
    // 0x25f4fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f500: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f504: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F504u;
    SET_GPR_U32(ctx, 31, 0x25F50Cu);
    ctx->pc = 0x25F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F504u;
    // 0x25f508: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F504u, 0x25F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F50Cu;
label_25f50c:
    // 0x25f50c: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x25F50Cu;
    {
        const bool branch_taken_0x25f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F50Cu;
        // 0x25f510: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f50c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F514u;
label_25f514:
    // 0x25f514: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f518: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f51c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F51Cu;
    SET_GPR_U32(ctx, 31, 0x25F524u);
    ctx->pc = 0x25F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F51Cu;
    // 0x25f520: 0x24a56bb8  addiu       $a1, $a1, 0x6BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F51Cu, 0x25F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F524u;
label_25f524:
    // 0x25f524: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x25F524u;
    {
        const bool branch_taken_0x25f524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F524u;
        // 0x25f528: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f524) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F52Cu;
label_25f52c:
    // 0x25f52c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f530: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f534: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F534u;
    SET_GPR_U32(ctx, 31, 0x25F53Cu);
    ctx->pc = 0x25F538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F534u;
    // 0x25f538: 0x24a56bc8  addiu       $a1, $a1, 0x6BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F534u, 0x25F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F53Cu;
label_25f53c:
    // 0x25f53c: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x25F53Cu;
    {
        const bool branch_taken_0x25f53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F53Cu;
        // 0x25f540: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f53c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F544u;
label_25f544:
    // 0x25f544: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f548: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f54c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F54Cu;
    SET_GPR_U32(ctx, 31, 0x25F554u);
    ctx->pc = 0x25F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F54Cu;
    // 0x25f550: 0x24a56be0  addiu       $a1, $a1, 0x6BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F54Cu, 0x25F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F554u;
label_25f554:
    // 0x25f554: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x25F554u;
    {
        const bool branch_taken_0x25f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F554u;
        // 0x25f558: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f554) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F55Cu;
label_25f55c:
    // 0x25f55c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f560: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f564: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F564u;
    SET_GPR_U32(ctx, 31, 0x25F56Cu);
    ctx->pc = 0x25F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F564u;
    // 0x25f568: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F564u, 0x25F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F56Cu;
label_25f56c:
    // 0x25f56c: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x25F56Cu;
    {
        const bool branch_taken_0x25f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F56Cu;
        // 0x25f570: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f56c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F574u;
label_25f574:
    // 0x25f574: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f578: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f57c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F57Cu;
    SET_GPR_U32(ctx, 31, 0x25F584u);
    ctx->pc = 0x25F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F57Cu;
    // 0x25f580: 0x24a56c08  addiu       $a1, $a1, 0x6C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F57Cu, 0x25F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F584u;
label_25f584:
    // 0x25f584: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x25F584u;
    {
        const bool branch_taken_0x25f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F584u;
        // 0x25f588: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f584) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F58Cu;
label_25f58c:
    // 0x25f58c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f590: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f594: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F594u;
    SET_GPR_U32(ctx, 31, 0x25F59Cu);
    ctx->pc = 0x25F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F594u;
    // 0x25f598: 0x24a56c28  addiu       $a1, $a1, 0x6C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F594u, 0x25F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F59Cu;
label_25f59c:
    // 0x25f59c: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x25F59Cu;
    {
        const bool branch_taken_0x25f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F59Cu;
        // 0x25f5a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f59c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F5A4u;
label_25f5a4:
    // 0x25f5a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f5a8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5ac: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F5ACu;
    SET_GPR_U32(ctx, 31, 0x25F5B4u);
    ctx->pc = 0x25F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5ACu;
    // 0x25f5b0: 0x24a56c40  addiu       $a1, $a1, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F5ACu, 0x25F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5B4u;
label_25f5b4:
    // 0x25f5b4: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x25F5B4u;
    {
        const bool branch_taken_0x25f5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5B4u;
        // 0x25f5b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5b4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F5BCu;
label_25f5bc:
    // 0x25f5bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f5c0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5c4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F5C4u;
    SET_GPR_U32(ctx, 31, 0x25F5CCu);
    ctx->pc = 0x25F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5C4u;
    // 0x25f5c8: 0x24a56c58  addiu       $a1, $a1, 0x6C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F5C4u, 0x25F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5CCu;
label_25f5cc:
    // 0x25f5cc: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x25F5CCu;
    {
        const bool branch_taken_0x25f5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5CCu;
        // 0x25f5d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5cc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F5D4u;
label_25f5d4:
    // 0x25f5d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f5d8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5dc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F5DCu;
    SET_GPR_U32(ctx, 31, 0x25F5E4u);
    ctx->pc = 0x25F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5DCu;
    // 0x25f5e0: 0x24a56c70  addiu       $a1, $a1, 0x6C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F5DCu, 0x25F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5E4u;
label_25f5e4:
    // 0x25f5e4: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x25F5E4u;
    {
        const bool branch_taken_0x25f5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5E4u;
        // 0x25f5e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5e4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F5ECu;
label_25f5ec:
    // 0x25f5ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f5f0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5f4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F5F4u;
    SET_GPR_U32(ctx, 31, 0x25F5FCu);
    ctx->pc = 0x25F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5F4u;
    // 0x25f5f8: 0x24a56c80  addiu       $a1, $a1, 0x6C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F5F4u, 0x25F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5FCu;
label_25f5fc:
    // 0x25f5fc: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x25F5FCu;
    {
        const bool branch_taken_0x25f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5FCu;
        // 0x25f600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5fc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F604u;
label_25f604:
    // 0x25f604: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f608: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f60c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F60Cu;
    SET_GPR_U32(ctx, 31, 0x25F614u);
    ctx->pc = 0x25F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F60Cu;
    // 0x25f610: 0x24a56c90  addiu       $a1, $a1, 0x6C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F60Cu, 0x25F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F614u;
label_25f614:
    // 0x25f614: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x25F614u;
    {
        const bool branch_taken_0x25f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F614u;
        // 0x25f618: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f614) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F61Cu;
label_25f61c:
    // 0x25f61c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f620: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f624: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F624u;
    SET_GPR_U32(ctx, 31, 0x25F62Cu);
    ctx->pc = 0x25F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F624u;
    // 0x25f628: 0x24a56ca8  addiu       $a1, $a1, 0x6CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F624u, 0x25F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F62Cu;
label_25f62c:
    // 0x25f62c: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x25F62Cu;
    {
        const bool branch_taken_0x25f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F62Cu;
        // 0x25f630: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f62c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F634u;
label_25f634:
    // 0x25f634: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f638: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f63c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F63Cu;
    SET_GPR_U32(ctx, 31, 0x25F644u);
    ctx->pc = 0x25F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F63Cu;
    // 0x25f640: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F63Cu, 0x25F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F644u;
label_25f644:
    // 0x25f644: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x25F644u;
    {
        const bool branch_taken_0x25f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F644u;
        // 0x25f648: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f644) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F64Cu;
label_25f64c:
    // 0x25f64c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f650: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f654: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F654u;
    SET_GPR_U32(ctx, 31, 0x25F65Cu);
    ctx->pc = 0x25F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F654u;
    // 0x25f658: 0x24a56cc8  addiu       $a1, $a1, 0x6CC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F654u, 0x25F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F65Cu;
label_25f65c:
    // 0x25f65c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x25F65Cu;
    {
        const bool branch_taken_0x25f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F65Cu;
        // 0x25f660: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f65c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F664u;
label_25f664:
    // 0x25f664: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f668: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f66c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F66Cu;
    SET_GPR_U32(ctx, 31, 0x25F674u);
    ctx->pc = 0x25F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F66Cu;
    // 0x25f670: 0x24a56cd8  addiu       $a1, $a1, 0x6CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F66Cu, 0x25F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F674u;
label_25f674:
    // 0x25f674: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x25F674u;
    {
        const bool branch_taken_0x25f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F674u;
        // 0x25f678: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f674) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F67Cu;
label_25f67c:
    // 0x25f67c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f680: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f684: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F684u;
    SET_GPR_U32(ctx, 31, 0x25F68Cu);
    ctx->pc = 0x25F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F684u;
    // 0x25f688: 0x24a56ce8  addiu       $a1, $a1, 0x6CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F684u, 0x25F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F68Cu;
label_25f68c:
    // 0x25f68c: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x25F68Cu;
    {
        const bool branch_taken_0x25f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F68Cu;
        // 0x25f690: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f68c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F694u;
label_25f694:
    // 0x25f694: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f698: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f69c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F69Cu;
    SET_GPR_U32(ctx, 31, 0x25F6A4u);
    ctx->pc = 0x25F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F69Cu;
    // 0x25f6a0: 0x24a56cf8  addiu       $a1, $a1, 0x6CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F69Cu, 0x25F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6A4u;
label_25f6a4:
    // 0x25f6a4: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x25F6A4u;
    {
        const bool branch_taken_0x25f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6A4u;
        // 0x25f6a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6a4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F6ACu;
label_25f6ac:
    // 0x25f6ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f6b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6b4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F6B4u;
    SET_GPR_U32(ctx, 31, 0x25F6BCu);
    ctx->pc = 0x25F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6B4u;
    // 0x25f6b8: 0x24a56d10  addiu       $a1, $a1, 0x6D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F6B4u, 0x25F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6BCu;
label_25f6bc:
    // 0x25f6bc: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x25F6BCu;
    {
        const bool branch_taken_0x25f6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6BCu;
        // 0x25f6c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6bc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F6C4u;
label_25f6c4:
    // 0x25f6c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f6c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6cc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F6CCu;
    SET_GPR_U32(ctx, 31, 0x25F6D4u);
    ctx->pc = 0x25F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6CCu;
    // 0x25f6d0: 0x24a56d28  addiu       $a1, $a1, 0x6D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F6CCu, 0x25F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6D4u;
label_25f6d4:
    // 0x25f6d4: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x25F6D4u;
    {
        const bool branch_taken_0x25f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6D4u;
        // 0x25f6d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6d4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F6DCu;
label_25f6dc:
    // 0x25f6dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f6e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6e4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F6E4u;
    SET_GPR_U32(ctx, 31, 0x25F6ECu);
    ctx->pc = 0x25F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6E4u;
    // 0x25f6e8: 0x24a56d38  addiu       $a1, $a1, 0x6D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F6E4u, 0x25F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6ECu;
label_25f6ec:
    // 0x25f6ec: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x25F6ECu;
    {
        const bool branch_taken_0x25f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6ECu;
        // 0x25f6f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6ec) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F6F4u;
label_25f6f4:
    // 0x25f6f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f6f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6fc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F6FCu;
    SET_GPR_U32(ctx, 31, 0x25F704u);
    ctx->pc = 0x25F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6FCu;
    // 0x25f700: 0x24a56d48  addiu       $a1, $a1, 0x6D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F6FCu, 0x25F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F704u;
label_25f704:
    // 0x25f704: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x25F704u;
    {
        const bool branch_taken_0x25f704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F704u;
        // 0x25f708: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f704) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F70Cu;
label_25f70c:
    // 0x25f70c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f710: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f714: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F714u;
    SET_GPR_U32(ctx, 31, 0x25F71Cu);
    ctx->pc = 0x25F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F714u;
    // 0x25f718: 0x24a56d60  addiu       $a1, $a1, 0x6D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F714u, 0x25F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F71Cu;
label_25f71c:
    // 0x25f71c: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x25F71Cu;
    {
        const bool branch_taken_0x25f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F71Cu;
        // 0x25f720: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f71c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F724u;
label_25f724:
    // 0x25f724: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f728: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f72c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F72Cu;
    SET_GPR_U32(ctx, 31, 0x25F734u);
    ctx->pc = 0x25F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F72Cu;
    // 0x25f730: 0x24a56d78  addiu       $a1, $a1, 0x6D78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F72Cu, 0x25F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F734u;
label_25f734:
    // 0x25f734: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x25F734u;
    {
        const bool branch_taken_0x25f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F734u;
        // 0x25f738: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f734) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F73Cu;
label_25f73c:
    // 0x25f73c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f740: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f744: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F744u;
    SET_GPR_U32(ctx, 31, 0x25F74Cu);
    ctx->pc = 0x25F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F744u;
    // 0x25f748: 0x24a56d98  addiu       $a1, $a1, 0x6D98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F744u, 0x25F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F74Cu;
label_25f74c:
    // 0x25f74c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x25F74Cu;
    {
        const bool branch_taken_0x25f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F74Cu;
        // 0x25f750: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f74c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F754u;
label_25f754:
    // 0x25f754: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f758: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f75c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F75Cu;
    SET_GPR_U32(ctx, 31, 0x25F764u);
    ctx->pc = 0x25F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F75Cu;
    // 0x25f760: 0x24a56da8  addiu       $a1, $a1, 0x6DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F75Cu, 0x25F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F764u;
label_25f764:
    // 0x25f764: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x25F764u;
    {
        const bool branch_taken_0x25f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F764u;
        // 0x25f768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f764) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F76Cu;
label_25f76c:
    // 0x25f76c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f770: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f774: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F774u;
    SET_GPR_U32(ctx, 31, 0x25F77Cu);
    ctx->pc = 0x25F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F774u;
    // 0x25f778: 0x24a56db8  addiu       $a1, $a1, 0x6DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F774u, 0x25F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F77Cu;
label_25f77c:
    // 0x25f77c: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x25F77Cu;
    {
        const bool branch_taken_0x25f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F77Cu;
        // 0x25f780: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f77c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F784u;
label_25f784:
    // 0x25f784: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f788: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f78c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F78Cu;
    SET_GPR_U32(ctx, 31, 0x25F794u);
    ctx->pc = 0x25F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F78Cu;
    // 0x25f790: 0x24a56dc8  addiu       $a1, $a1, 0x6DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F78Cu, 0x25F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F794u;
label_25f794:
    // 0x25f794: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x25F794u;
    {
        const bool branch_taken_0x25f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F794u;
        // 0x25f798: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f794) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F79Cu;
label_25f79c:
    // 0x25f79c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f7a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7a4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F7A4u;
    SET_GPR_U32(ctx, 31, 0x25F7ACu);
    ctx->pc = 0x25F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7A4u;
    // 0x25f7a8: 0x24a56dd8  addiu       $a1, $a1, 0x6DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F7A4u, 0x25F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7ACu;
label_25f7ac:
    // 0x25f7ac: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x25F7ACu;
    {
        const bool branch_taken_0x25f7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7ACu;
        // 0x25f7b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7ac) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F7B4u;
label_25f7b4:
    // 0x25f7b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f7b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7bc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F7BCu;
    SET_GPR_U32(ctx, 31, 0x25F7C4u);
    ctx->pc = 0x25F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7BCu;
    // 0x25f7c0: 0x24a56de8  addiu       $a1, $a1, 0x6DE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F7BCu, 0x25F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7C4u;
label_25f7c4:
    // 0x25f7c4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x25F7C4u;
    {
        const bool branch_taken_0x25f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7C4u;
        // 0x25f7c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7c4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F7CCu;
label_25f7cc:
    // 0x25f7cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f7d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7d4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F7D4u;
    SET_GPR_U32(ctx, 31, 0x25F7DCu);
    ctx->pc = 0x25F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7D4u;
    // 0x25f7d8: 0x24a56e00  addiu       $a1, $a1, 0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F7D4u, 0x25F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7DCu;
label_25f7dc:
    // 0x25f7dc: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x25F7DCu;
    {
        const bool branch_taken_0x25f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7DCu;
        // 0x25f7e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7dc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F7E4u;
label_25f7e4:
    // 0x25f7e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f7e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7ec: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F7ECu;
    SET_GPR_U32(ctx, 31, 0x25F7F4u);
    ctx->pc = 0x25F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7ECu;
    // 0x25f7f0: 0x24a56e10  addiu       $a1, $a1, 0x6E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F7ECu, 0x25F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7F4u;
label_25f7f4:
    // 0x25f7f4: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x25F7F4u;
    {
        const bool branch_taken_0x25f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7F4u;
        // 0x25f7f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7f4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F7FCu;
label_25f7fc:
    // 0x25f7fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f800: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f804: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F804u;
    SET_GPR_U32(ctx, 31, 0x25F80Cu);
    ctx->pc = 0x25F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F804u;
    // 0x25f808: 0x24a56e20  addiu       $a1, $a1, 0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F804u, 0x25F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F80Cu;
label_25f80c:
    // 0x25f80c: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x25F80Cu;
    {
        const bool branch_taken_0x25f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F80Cu;
        // 0x25f810: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f80c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F814u;
label_25f814:
    // 0x25f814: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f818: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f81c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F81Cu;
    SET_GPR_U32(ctx, 31, 0x25F824u);
    ctx->pc = 0x25F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F81Cu;
    // 0x25f820: 0x24a56e30  addiu       $a1, $a1, 0x6E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F81Cu, 0x25F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F824u;
label_25f824:
    // 0x25f824: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x25F824u;
    {
        const bool branch_taken_0x25f824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F824u;
        // 0x25f828: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f824) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F82Cu;
label_25f82c:
    // 0x25f82c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f830: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f834: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F834u;
    SET_GPR_U32(ctx, 31, 0x25F83Cu);
    ctx->pc = 0x25F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F834u;
    // 0x25f838: 0x24a56e40  addiu       $a1, $a1, 0x6E40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F834u, 0x25F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F83Cu;
label_25f83c:
    // 0x25f83c: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x25F83Cu;
    {
        const bool branch_taken_0x25f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F83Cu;
        // 0x25f840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f83c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F844u;
label_25f844:
    // 0x25f844: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f848: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f84c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F84Cu;
    SET_GPR_U32(ctx, 31, 0x25F854u);
    ctx->pc = 0x25F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F84Cu;
    // 0x25f850: 0x24a56e50  addiu       $a1, $a1, 0x6E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F84Cu, 0x25F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F854u;
label_25f854:
    // 0x25f854: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x25F854u;
    {
        const bool branch_taken_0x25f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F854u;
        // 0x25f858: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f854) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F85Cu;
label_25f85c:
    // 0x25f85c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f860: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f864: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F864u;
    SET_GPR_U32(ctx, 31, 0x25F86Cu);
    ctx->pc = 0x25F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F864u;
    // 0x25f868: 0x24a56e60  addiu       $a1, $a1, 0x6E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F864u, 0x25F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F86Cu;
label_25f86c:
    // 0x25f86c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x25F86Cu;
    {
        const bool branch_taken_0x25f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F86Cu;
        // 0x25f870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f86c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F874u;
label_25f874:
    // 0x25f874: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f878: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f87c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F87Cu;
    SET_GPR_U32(ctx, 31, 0x25F884u);
    ctx->pc = 0x25F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F87Cu;
    // 0x25f880: 0x24a56e80  addiu       $a1, $a1, 0x6E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F87Cu, 0x25F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F884u;
label_25f884:
    // 0x25f884: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x25F884u;
    {
        const bool branch_taken_0x25f884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F884u;
        // 0x25f888: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f884) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F88Cu;
label_25f88c:
    // 0x25f88c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f890: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f894: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F894u;
    SET_GPR_U32(ctx, 31, 0x25F89Cu);
    ctx->pc = 0x25F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F894u;
    // 0x25f898: 0x24a56e90  addiu       $a1, $a1, 0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F894u, 0x25F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F89Cu;
label_25f89c:
    // 0x25f89c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x25F89Cu;
    {
        const bool branch_taken_0x25f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F89Cu;
        // 0x25f8a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f89c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F8A4u;
label_25f8a4:
    // 0x25f8a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f8a8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8ac: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F8ACu;
    SET_GPR_U32(ctx, 31, 0x25F8B4u);
    ctx->pc = 0x25F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8ACu;
    // 0x25f8b0: 0x24a56ea0  addiu       $a1, $a1, 0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F8ACu, 0x25F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8B4u;
label_25f8b4:
    // 0x25f8b4: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x25F8B4u;
    {
        const bool branch_taken_0x25f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8B4u;
        // 0x25f8b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8b4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F8BCu;
label_25f8bc:
    // 0x25f8bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f8c0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8c4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F8C4u;
    SET_GPR_U32(ctx, 31, 0x25F8CCu);
    ctx->pc = 0x25F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8C4u;
    // 0x25f8c8: 0x24a56eb0  addiu       $a1, $a1, 0x6EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F8C4u, 0x25F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8CCu;
label_25f8cc:
    // 0x25f8cc: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x25F8CCu;
    {
        const bool branch_taken_0x25f8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8CCu;
        // 0x25f8d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8cc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F8D4u;
label_25f8d4:
    // 0x25f8d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f8d8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8dc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F8DCu;
    SET_GPR_U32(ctx, 31, 0x25F8E4u);
    ctx->pc = 0x25F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8DCu;
    // 0x25f8e0: 0x24a56ec0  addiu       $a1, $a1, 0x6EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F8DCu, 0x25F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8E4u;
label_25f8e4:
    // 0x25f8e4: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x25F8E4u;
    {
        const bool branch_taken_0x25f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8E4u;
        // 0x25f8e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8e4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F8ECu;
label_25f8ec:
    // 0x25f8ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f8f0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8f4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F8F4u;
    SET_GPR_U32(ctx, 31, 0x25F8FCu);
    ctx->pc = 0x25F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8F4u;
    // 0x25f8f8: 0x24a56ed0  addiu       $a1, $a1, 0x6ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F8F4u, 0x25F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8FCu;
label_25f8fc:
    // 0x25f8fc: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x25F8FCu;
    {
        const bool branch_taken_0x25f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8FCu;
        // 0x25f900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8fc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F904u;
label_25f904:
    // 0x25f904: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f908: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f90c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F90Cu;
    SET_GPR_U32(ctx, 31, 0x25F914u);
    ctx->pc = 0x25F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F90Cu;
    // 0x25f910: 0x24a56ee0  addiu       $a1, $a1, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F90Cu, 0x25F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F914u;
label_25f914:
    // 0x25f914: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x25F914u;
    {
        const bool branch_taken_0x25f914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F914u;
        // 0x25f918: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f914) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F91Cu;
label_25f91c:
    // 0x25f91c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f920: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f924: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F924u;
    SET_GPR_U32(ctx, 31, 0x25F92Cu);
    ctx->pc = 0x25F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F924u;
    // 0x25f928: 0x24a56ef0  addiu       $a1, $a1, 0x6EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F924u, 0x25F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F92Cu;
label_25f92c:
    // 0x25f92c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x25F92Cu;
    {
        const bool branch_taken_0x25f92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F92Cu;
        // 0x25f930: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f92c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F934u;
label_25f934:
    // 0x25f934: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f938: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f93c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F93Cu;
    SET_GPR_U32(ctx, 31, 0x25F944u);
    ctx->pc = 0x25F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F93Cu;
    // 0x25f940: 0x24a56f00  addiu       $a1, $a1, 0x6F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F93Cu, 0x25F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F944u;
label_25f944:
    // 0x25f944: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x25F944u;
    {
        const bool branch_taken_0x25f944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F944u;
        // 0x25f948: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f944) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F94Cu;
label_25f94c:
    // 0x25f94c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f950: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f954: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F954u;
    SET_GPR_U32(ctx, 31, 0x25F95Cu);
    ctx->pc = 0x25F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F954u;
    // 0x25f958: 0x24a56f10  addiu       $a1, $a1, 0x6F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F954u, 0x25F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F95Cu;
label_25f95c:
    // 0x25f95c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x25F95Cu;
    {
        const bool branch_taken_0x25f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F95Cu;
        // 0x25f960: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f95c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F964u;
label_25f964:
    // 0x25f964: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f968: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f96c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F96Cu;
    SET_GPR_U32(ctx, 31, 0x25F974u);
    ctx->pc = 0x25F970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F96Cu;
    // 0x25f970: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F96Cu, 0x25F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F974u;
label_25f974:
    // 0x25f974: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x25F974u;
    {
        const bool branch_taken_0x25f974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F974u;
        // 0x25f978: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f974) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F97Cu;
label_25f97c:
    // 0x25f97c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f980: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f984: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F984u;
    SET_GPR_U32(ctx, 31, 0x25F98Cu);
    ctx->pc = 0x25F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F984u;
    // 0x25f988: 0x24a56f28  addiu       $a1, $a1, 0x6F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F984u, 0x25F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F98Cu;
label_25f98c:
    // 0x25f98c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x25F98Cu;
    {
        const bool branch_taken_0x25f98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F98Cu;
        // 0x25f990: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f98c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F994u;
label_25f994:
    // 0x25f994: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f998: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f99c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F99Cu;
    SET_GPR_U32(ctx, 31, 0x25F9A4u);
    ctx->pc = 0x25F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F99Cu;
    // 0x25f9a0: 0x24a56f38  addiu       $a1, $a1, 0x6F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F99Cu, 0x25F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9A4u;
label_25f9a4:
    // 0x25f9a4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x25F9A4u;
    {
        const bool branch_taken_0x25f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9A4u;
        // 0x25f9a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9a4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F9ACu;
label_25f9ac:
    // 0x25f9ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f9b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9b4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F9B4u;
    SET_GPR_U32(ctx, 31, 0x25F9BCu);
    ctx->pc = 0x25F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9B4u;
    // 0x25f9b8: 0x24a56f48  addiu       $a1, $a1, 0x6F48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F9B4u, 0x25F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9BCu;
label_25f9bc:
    // 0x25f9bc: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x25F9BCu;
    {
        const bool branch_taken_0x25f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9BCu;
        // 0x25f9c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9bc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F9C4u;
label_25f9c4:
    // 0x25f9c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f9c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9cc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F9CCu;
    SET_GPR_U32(ctx, 31, 0x25F9D4u);
    ctx->pc = 0x25F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9CCu;
    // 0x25f9d0: 0x24a56f58  addiu       $a1, $a1, 0x6F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F9CCu, 0x25F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9D4u;
label_25f9d4:
    // 0x25f9d4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x25F9D4u;
    {
        const bool branch_taken_0x25f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9D4u;
        // 0x25f9d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9d4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F9DCu;
label_25f9dc:
    // 0x25f9dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f9e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9e4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F9E4u;
    SET_GPR_U32(ctx, 31, 0x25F9ECu);
    ctx->pc = 0x25F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9E4u;
    // 0x25f9e8: 0x24a56f68  addiu       $a1, $a1, 0x6F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F9E4u, 0x25F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9ECu;
label_25f9ec:
    // 0x25f9ec: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x25F9ECu;
    {
        const bool branch_taken_0x25f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9ECu;
        // 0x25f9f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9ec) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25F9F4u;
label_25f9f4:
    // 0x25f9f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f9f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9fc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25F9FCu;
    SET_GPR_U32(ctx, 31, 0x25FA04u);
    ctx->pc = 0x25FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9FCu;
    // 0x25fa00: 0x24a56f78  addiu       $a1, $a1, 0x6F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25F9FCu, 0x25FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA04u;
label_25fa04:
    // 0x25fa04: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x25FA04u;
    {
        const bool branch_taken_0x25fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA04u;
        // 0x25fa08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa04) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FA0Cu;
label_25fa0c:
    // 0x25fa0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fa10: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa14: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FA14u;
    SET_GPR_U32(ctx, 31, 0x25FA1Cu);
    ctx->pc = 0x25FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA14u;
    // 0x25fa18: 0x24a56f90  addiu       $a1, $a1, 0x6F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FA14u, 0x25FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA1Cu;
label_25fa1c:
    // 0x25fa1c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x25FA1Cu;
    {
        const bool branch_taken_0x25fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA1Cu;
        // 0x25fa20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa1c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FA24u;
label_25fa24:
    // 0x25fa24: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fa28: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa2c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FA2Cu;
    SET_GPR_U32(ctx, 31, 0x25FA34u);
    ctx->pc = 0x25FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA2Cu;
    // 0x25fa30: 0x24a56fa0  addiu       $a1, $a1, 0x6FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FA2Cu, 0x25FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA34u;
label_25fa34:
    // 0x25fa34: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x25FA34u;
    {
        const bool branch_taken_0x25fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA34u;
        // 0x25fa38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa34) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FA3Cu;
label_25fa3c:
    // 0x25fa3c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fa40: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa44: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FA44u;
    SET_GPR_U32(ctx, 31, 0x25FA4Cu);
    ctx->pc = 0x25FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA44u;
    // 0x25fa48: 0x24a56fb8  addiu       $a1, $a1, 0x6FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FA44u, 0x25FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA4Cu;
label_25fa4c:
    // 0x25fa4c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x25FA4Cu;
    {
        const bool branch_taken_0x25fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA4Cu;
        // 0x25fa50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa4c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FA54u;
label_25fa54:
    // 0x25fa54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fa58: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa5c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FA5Cu;
    SET_GPR_U32(ctx, 31, 0x25FA64u);
    ctx->pc = 0x25FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA5Cu;
    // 0x25fa60: 0x24a56fc8  addiu       $a1, $a1, 0x6FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FA5Cu, 0x25FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA64u;
label_25fa64:
    // 0x25fa64: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x25FA64u;
    {
        const bool branch_taken_0x25fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA64u;
        // 0x25fa68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa64) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FA6Cu;
label_25fa6c:
    // 0x25fa6c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fa70: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa74: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FA74u;
    SET_GPR_U32(ctx, 31, 0x25FA7Cu);
    ctx->pc = 0x25FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA74u;
    // 0x25fa78: 0x24a56fd8  addiu       $a1, $a1, 0x6FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FA74u, 0x25FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA7Cu;
label_25fa7c:
    // 0x25fa7c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x25FA7Cu;
    {
        const bool branch_taken_0x25fa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA7Cu;
        // 0x25fa80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa7c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FA84u;
label_25fa84:
    // 0x25fa84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fa88: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa8c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FA8Cu;
    SET_GPR_U32(ctx, 31, 0x25FA94u);
    ctx->pc = 0x25FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA8Cu;
    // 0x25fa90: 0x24a56fe8  addiu       $a1, $a1, 0x6FE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FA8Cu, 0x25FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA94u;
label_25fa94:
    // 0x25fa94: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x25FA94u;
    {
        const bool branch_taken_0x25fa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA94u;
        // 0x25fa98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa94) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FA9Cu;
label_25fa9c:
    // 0x25fa9c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25faa0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faa4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FAA4u;
    SET_GPR_U32(ctx, 31, 0x25FAACu);
    ctx->pc = 0x25FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAA4u;
    // 0x25faa8: 0x24a56ff8  addiu       $a1, $a1, 0x6FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FAA4u, 0x25FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAACu;
label_25faac:
    // 0x25faac: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x25FAACu;
    {
        const bool branch_taken_0x25faac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAACu;
        // 0x25fab0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25faac) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FAB4u;
label_25fab4:
    // 0x25fab4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fab8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fabc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FABCu;
    SET_GPR_U32(ctx, 31, 0x25FAC4u);
    ctx->pc = 0x25FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FABCu;
    // 0x25fac0: 0x24a57008  addiu       $a1, $a1, 0x7008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FABCu, 0x25FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAC4u;
label_25fac4:
    // 0x25fac4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x25FAC4u;
    {
        const bool branch_taken_0x25fac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAC4u;
        // 0x25fac8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fac4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FACCu;
label_25facc:
    // 0x25facc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25faccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fad0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fad4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FAD4u;
    SET_GPR_U32(ctx, 31, 0x25FADCu);
    ctx->pc = 0x25FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAD4u;
    // 0x25fad8: 0x24a57020  addiu       $a1, $a1, 0x7020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FAD4u, 0x25FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FADCu;
label_25fadc:
    // 0x25fadc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x25FADCu;
    {
        const bool branch_taken_0x25fadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FADCu;
        // 0x25fae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fadc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FAE4u;
label_25fae4:
    // 0x25fae4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fae8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faec: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FAECu;
    SET_GPR_U32(ctx, 31, 0x25FAF4u);
    ctx->pc = 0x25FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAECu;
    // 0x25faf0: 0x24a57030  addiu       $a1, $a1, 0x7030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FAECu, 0x25FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAF4u;
label_25faf4:
    // 0x25faf4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x25FAF4u;
    {
        const bool branch_taken_0x25faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAF4u;
        // 0x25faf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25faf4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FAFCu;
label_25fafc:
    // 0x25fafc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fb00: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb04: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FB04u;
    SET_GPR_U32(ctx, 31, 0x25FB0Cu);
    ctx->pc = 0x25FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB04u;
    // 0x25fb08: 0x24a57040  addiu       $a1, $a1, 0x7040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FB04u, 0x25FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB0Cu;
label_25fb0c:
    // 0x25fb0c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x25FB0Cu;
    {
        const bool branch_taken_0x25fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB0Cu;
        // 0x25fb10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb0c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FB14u;
label_25fb14:
    // 0x25fb14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fb18: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb1c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FB1Cu;
    SET_GPR_U32(ctx, 31, 0x25FB24u);
    ctx->pc = 0x25FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB1Cu;
    // 0x25fb20: 0x24a57058  addiu       $a1, $a1, 0x7058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FB1Cu, 0x25FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB24u;
label_25fb24:
    // 0x25fb24: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25FB24u;
    {
        const bool branch_taken_0x25fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB24u;
        // 0x25fb28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb24) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FB2Cu;
label_25fb2c:
    // 0x25fb2c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fb30: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb34: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FB34u;
    SET_GPR_U32(ctx, 31, 0x25FB3Cu);
    ctx->pc = 0x25FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB34u;
    // 0x25fb38: 0x24a57068  addiu       $a1, $a1, 0x7068 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FB34u, 0x25FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB3Cu;
label_25fb3c:
    // 0x25fb3c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x25FB3Cu;
    {
        const bool branch_taken_0x25fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB3Cu;
        // 0x25fb40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb3c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FB44u;
label_25fb44:
    // 0x25fb44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fb44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fb48: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb4c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FB4Cu;
    SET_GPR_U32(ctx, 31, 0x25FB54u);
    ctx->pc = 0x25FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB4Cu;
    // 0x25fb50: 0x24a57080  addiu       $a1, $a1, 0x7080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FB4Cu, 0x25FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB54u;
label_25fb54:
    // 0x25fb54: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x25FB54u;
    {
        const bool branch_taken_0x25fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB54u;
        // 0x25fb58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb54) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FB5Cu;
label_25fb5c:
    // 0x25fb5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fb60: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb64: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FB64u;
    SET_GPR_U32(ctx, 31, 0x25FB6Cu);
    ctx->pc = 0x25FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB64u;
    // 0x25fb68: 0x24a57090  addiu       $a1, $a1, 0x7090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FB64u, 0x25FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB6Cu;
label_25fb6c:
    // 0x25fb6c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25FB6Cu;
    {
        const bool branch_taken_0x25fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB6Cu;
        // 0x25fb70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb6c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FB74u;
label_25fb74:
    // 0x25fb74: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fb78: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb7c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FB7Cu;
    SET_GPR_U32(ctx, 31, 0x25FB84u);
    ctx->pc = 0x25FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB7Cu;
    // 0x25fb80: 0x24a570a0  addiu       $a1, $a1, 0x70A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FB7Cu, 0x25FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB84u;
label_25fb84:
    // 0x25fb84: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x25FB84u;
    {
        const bool branch_taken_0x25fb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB84u;
        // 0x25fb88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb84) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FB8Cu;
label_25fb8c:
    // 0x25fb8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fb90: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb94: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FB94u;
    SET_GPR_U32(ctx, 31, 0x25FB9Cu);
    ctx->pc = 0x25FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB94u;
    // 0x25fb98: 0x24a56e70  addiu       $a1, $a1, 0x6E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FB94u, 0x25FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB9Cu;
label_25fb9c:
    // 0x25fb9c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25FB9Cu;
    {
        const bool branch_taken_0x25fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB9Cu;
        // 0x25fba0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb9c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FBA4u;
label_25fba4:
    // 0x25fba4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fba8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbac: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FBACu;
    SET_GPR_U32(ctx, 31, 0x25FBB4u);
    ctx->pc = 0x25FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBACu;
    // 0x25fbb0: 0x24a570b0  addiu       $a1, $a1, 0x70B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FBACu, 0x25FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBB4u;
label_25fbb4:
    // 0x25fbb4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x25FBB4u;
    {
        const bool branch_taken_0x25fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBB4u;
        // 0x25fbb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbb4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FBBCu;
label_25fbbc:
    // 0x25fbbc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fbc0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbc4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FBC4u;
    SET_GPR_U32(ctx, 31, 0x25FBCCu);
    ctx->pc = 0x25FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBC4u;
    // 0x25fbc8: 0x24a570c0  addiu       $a1, $a1, 0x70C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FBC4u, 0x25FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBCCu;
label_25fbcc:
    // 0x25fbcc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25FBCCu;
    {
        const bool branch_taken_0x25fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBCCu;
        // 0x25fbd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbcc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FBD4u;
label_25fbd4:
    // 0x25fbd4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fbd8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbdc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FBDCu;
    SET_GPR_U32(ctx, 31, 0x25FBE4u);
    ctx->pc = 0x25FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBDCu;
    // 0x25fbe0: 0x24a570d0  addiu       $a1, $a1, 0x70D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FBDCu, 0x25FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBE4u;
label_25fbe4:
    // 0x25fbe4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25FBE4u;
    {
        const bool branch_taken_0x25fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBE4u;
        // 0x25fbe8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbe4) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FBECu;
label_25fbec:
    // 0x25fbec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fbf0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbf4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FBF4u;
    SET_GPR_U32(ctx, 31, 0x25FBFCu);
    ctx->pc = 0x25FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBF4u;
    // 0x25fbf8: 0x24a570e0  addiu       $a1, $a1, 0x70E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FBF4u, 0x25FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBFCu;
label_25fbfc:
    // 0x25fbfc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25FBFCu;
    {
        const bool branch_taken_0x25fbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBFCu;
        // 0x25fc00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbfc) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FC04u;
label_25fc04:
    // 0x25fc04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fc08: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc0c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FC0Cu;
    SET_GPR_U32(ctx, 31, 0x25FC14u);
    ctx->pc = 0x25FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC0Cu;
    // 0x25fc10: 0x24a570f0  addiu       $a1, $a1, 0x70F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FC0Cu, 0x25FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC14u;
label_25fc14:
    // 0x25fc14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25FC14u;
    {
        const bool branch_taken_0x25fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC14u;
        // 0x25fc18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc14) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FC1Cu;
label_25fc1c:
    // 0x25fc1c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fc20: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc24: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FC24u;
    SET_GPR_U32(ctx, 31, 0x25FC2Cu);
    ctx->pc = 0x25FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC24u;
    // 0x25fc28: 0x24a57100  addiu       $a1, $a1, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FC24u, 0x25FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC2Cu;
label_25fc2c:
    // 0x25fc2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25FC2Cu;
    {
        const bool branch_taken_0x25fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC2Cu;
        // 0x25fc30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc2c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FC34u;
label_25fc34:
    // 0x25fc34: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fc38: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc3c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FC3Cu;
    SET_GPR_U32(ctx, 31, 0x25FC44u);
    ctx->pc = 0x25FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC3Cu;
    // 0x25fc40: 0x24a57110  addiu       $a1, $a1, 0x7110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FC3Cu, 0x25FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC44u;
label_25fc44:
    // 0x25fc44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25FC44u;
    {
        const bool branch_taken_0x25fc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC44u;
        // 0x25fc48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc44) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FC4Cu;
label_25fc4c:
    // 0x25fc4c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fc50: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc54: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FC54u;
    SET_GPR_U32(ctx, 31, 0x25FC5Cu);
    ctx->pc = 0x25FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC54u;
    // 0x25fc58: 0x24a57120  addiu       $a1, $a1, 0x7120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FC54u, 0x25FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC5Cu;
label_25fc5c:
    // 0x25fc5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25FC5Cu;
    {
        const bool branch_taken_0x25fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC5Cu;
        // 0x25fc60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc5c) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FC64u;
label_25fc64:
    // 0x25fc64: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fc68: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc6c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FC6Cu;
    SET_GPR_U32(ctx, 31, 0x25FC74u);
    ctx->pc = 0x25FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC6Cu;
    // 0x25fc70: 0x24a57130  addiu       $a1, $a1, 0x7130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FC6Cu, 0x25FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC74u;
label_25fc74:
    // 0x25fc74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25FC74u;
    {
        const bool branch_taken_0x25fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC74u;
        // 0x25fc78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc74) {
            ctx->pc = 0x25FC90u;
            return;
        }
    }
    ctx->pc = 0x25FC7Cu;
}
