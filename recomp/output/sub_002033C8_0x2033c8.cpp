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

// Function: sub_002033C8
// Address: 0x2033c8 - 0x203868
void sub_002033C8_0x2033c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002033C8_0x2033c8");
#endif

    switch (ctx->pc) {
        case 0x203408u: goto label_203408;
        case 0x203418u: goto label_203418;
        case 0x20342cu: goto label_20342c;
        case 0x203438u: goto label_203438;
        case 0x203440u: goto label_203440;
        case 0x203450u: goto label_203450;
        case 0x203464u: goto label_203464;
        case 0x203470u: goto label_203470;
        case 0x203478u: goto label_203478;
        case 0x203480u: goto label_203480;
        case 0x203488u: goto label_203488;
        case 0x2034b0u: goto label_2034b0;
        case 0x2034b8u: goto label_2034b8;
        case 0x2034c0u: goto label_2034c0;
        case 0x2034c8u: goto label_2034c8;
        case 0x2034d4u: goto label_2034d4;
        case 0x2034e8u: goto label_2034e8;
        case 0x2034f8u: goto label_2034f8;
        case 0x203500u: goto label_203500;
        case 0x203534u: goto label_203534;
        case 0x203540u: goto label_203540;
        case 0x203550u: goto label_203550;
        case 0x20355cu: goto label_20355c;
        case 0x203568u: goto label_203568;
        case 0x203570u: goto label_203570;
        case 0x203578u: goto label_203578;
        case 0x203594u: goto label_203594;
        case 0x2035a4u: goto label_2035a4;
        case 0x2035b4u: goto label_2035b4;
        case 0x2035c8u: goto label_2035c8;
        case 0x2035d4u: goto label_2035d4;
        case 0x2035e0u: goto label_2035e0;
        case 0x2035ecu: goto label_2035ec;
        case 0x2035f8u: goto label_2035f8;
        case 0x203604u: goto label_203604;
        case 0x203614u: goto label_203614;
        case 0x203624u: goto label_203624;
        case 0x203638u: goto label_203638;
        case 0x203644u: goto label_203644;
        case 0x203650u: goto label_203650;
        case 0x20365cu: goto label_20365c;
        case 0x203668u: goto label_203668;
        case 0x203694u: goto label_203694;
        case 0x2036a4u: goto label_2036a4;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036c4u: goto label_2036c4;
        case 0x2036d0u: goto label_2036d0;
        case 0x2036dcu: goto label_2036dc;
        case 0x2036e8u: goto label_2036e8;
        case 0x2036f8u: goto label_2036f8;
        case 0x203708u: goto label_203708;
        case 0x20371cu: goto label_20371c;
        case 0x203728u: goto label_203728;
        case 0x203734u: goto label_203734;
        case 0x203740u: goto label_203740;
        case 0x20374cu: goto label_20374c;
        case 0x203754u: goto label_203754;
        case 0x20375cu: goto label_20375c;
        case 0x203764u: goto label_203764;
        case 0x203778u: goto label_203778;
        case 0x203784u: goto label_203784;
        case 0x203790u: goto label_203790;
        case 0x20379cu: goto label_20379c;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c8u: goto label_2037c8;
        case 0x2037d0u: goto label_2037d0;
        case 0x2037d8u: goto label_2037d8;
        case 0x2037e4u: goto label_2037e4;
        case 0x2037f8u: goto label_2037f8;
        case 0x203804u: goto label_203804;
        case 0x203810u: goto label_203810;
        case 0x20381cu: goto label_20381c;
        case 0x203828u: goto label_203828;
        case 0x203834u: goto label_203834;
        default: break;
    }

    ctx->pc = 0x2033c8u;

    // 0x2033c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2033c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2033cc: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x2033ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x2033d0: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x2033d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2033d4: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x2033d8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2033d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2033dc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2033dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2033e0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2033e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2033e4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2033e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033e8: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x2033e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x2033ec: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x2033ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x2033f0: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x2033f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x2033f4: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x2033f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x2033f8: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x2033f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x2033fc: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x2033fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x203400: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x203400u;
    SET_GPR_U32(ctx, 31, 0x203408u);
    ctx->pc = 0x203404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203400u;
    // 0x203404: 0x2631ec20  addiu       $s1, $s1, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x203400u, 0x203408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203408u;
label_203408:
    // 0x203408: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x203408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20340c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203410: 0xc0d74e8  jal         func_35D3A0
    ctx->pc = 0x203410u;
    SET_GPR_U32(ctx, 31, 0x203418u);
    ctx->pc = 0x203414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203410u;
    // 0x203414: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x203410u, 0x203418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203418u;
label_203418:
    // 0x203418: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x203418u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x20341c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203420: 0x24c60938  addiu       $a2, $a2, 0x938
    ctx->pc = 0x203420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2360));
    // 0x203424: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x203424u;
    SET_GPR_U32(ctx, 31, 0x20342Cu);
    ctx->pc = 0x203428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203424u;
    // 0x203428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x203424u, 0x20342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20342Cu;
label_20342c:
    // 0x20342c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203430: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203430u;
    SET_GPR_U32(ctx, 31, 0x203438u);
    ctx->pc = 0x203434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203430u;
    // 0x203434: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203430u, 0x203438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x203438u;
    SET_GPR_U32(ctx, 31, 0x203440u);
    ctx->pc = 0x20343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203438u;
    // 0x20343c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x203438u, 0x203440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203440u;
label_203440:
    // 0x203440: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x203440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203448: 0xc0d74e8  jal         func_35D3A0
    ctx->pc = 0x203448u;
    SET_GPR_U32(ctx, 31, 0x203450u);
    ctx->pc = 0x20344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203448u;
    // 0x20344c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x203448u, 0x203450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203450u;
label_203450:
    // 0x203450: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x203450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x203454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203458: 0x24c60948  addiu       $a2, $a2, 0x948
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2376));
    // 0x20345c: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x20345Cu;
    SET_GPR_U32(ctx, 31, 0x203464u);
    ctx->pc = 0x203460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20345Cu;
    // 0x203460: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x20345Cu, 0x203464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203464u;
label_203464:
    // 0x203464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x203464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203468: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203468u;
    SET_GPR_U32(ctx, 31, 0x203470u);
    ctx->pc = 0x20346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203468u;
    // 0x20346c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203468u, 0x203470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203470u;
label_203470:
    // 0x203470: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x203470u;
    SET_GPR_U32(ctx, 31, 0x203478u);
    ctx->pc = 0x203474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203470u;
    // 0x203474: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x203470u, 0x203478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203478u;
label_203478:
    // 0x203478: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x203478u;
    SET_GPR_U32(ctx, 31, 0x203480u);
    ctx->pc = 0x20347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203478u;
    // 0x20347c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x203478u, 0x203480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203480u;
label_203480:
    // 0x203480: 0xc0807a4  jal         func_201E90
    ctx->pc = 0x203480u;
    SET_GPR_U32(ctx, 31, 0x203488u);
    ctx->pc = 0x203484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203480u;
    // 0x203484: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E90u, 0x203480u, 0x203488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203488u;
label_203488:
    // 0x203488: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x203488u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20348c: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x20348cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x203490: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x203490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x203494: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x203494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x203498: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x203498u;
    {
        const bool branch_taken_0x203498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203498u;
        // 0x20349c: 0x27b50070  addiu       $s5, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203498) {
            ctx->pc = 0x2034E8u;
            goto label_2034e8;
        }
    }
    ctx->pc = 0x2034A0u;
    // 0x2034a0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2034a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2034a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2034a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034a8: 0xc080924  jal         func_202490
    ctx->pc = 0x2034A8u;
    SET_GPR_U32(ctx, 31, 0x2034B0u);
    ctx->pc = 0x2034ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034A8u;
    // 0x2034ac: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202490u, 0x2034A8u, 0x2034B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034B0u;
label_2034b0:
    // 0x2034b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2034B0u;
    {
        const bool branch_taken_0x2034b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034B0u;
        // 0x2034b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034b0) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x2034B8u;
label_2034b8:
    // 0x2034b8: 0xc082662  jal         func_209988
    ctx->pc = 0x2034B8u;
    SET_GPR_U32(ctx, 31, 0x2034C0u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x2034B8u, 0x2034C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034C0u;
label_2034c0:
    // 0x2034c0: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2034C0u;
    SET_GPR_U32(ctx, 31, 0x2034C8u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2034C0u, 0x2034C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034C8u;
label_2034c8:
    // 0x2034c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2034c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2034cc:
    // 0x2034cc: 0xc080a12  jal         func_202848
    ctx->pc = 0x2034CCu;
    SET_GPR_U32(ctx, 31, 0x2034D4u);
    ctx->pc = 0x2034D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034CCu;
    // 0x2034d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202848u, 0x2034CCu, 0x2034D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034D4u;
label_2034d4:
    // 0x2034d4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2034D4u;
    {
        const bool branch_taken_0x2034d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034D4u;
        // 0x2034d8: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034d4) {
            ctx->pc = 0x2034B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2034b8;
        }
    }
    ctx->pc = 0x2034DCu;
    // 0x2034dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2034dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034e0: 0xc08093a  jal         func_2024E8
    ctx->pc = 0x2034E0u;
    SET_GPR_U32(ctx, 31, 0x2034E8u);
    ctx->pc = 0x2034E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034E0u;
    // 0x2034e4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024E8u, 0x2034E0u, 0x2034E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034E8u;
label_2034e8:
    // 0x2034e8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2034e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2034ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034f0: 0xc080b04  jal         func_202C10
    ctx->pc = 0x2034F0u;
    SET_GPR_U32(ctx, 31, 0x2034F8u);
    ctx->pc = 0x2034F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034F0u;
    // 0x2034f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C10u, 0x2034F0u, 0x2034F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034F8u;
label_2034f8:
    // 0x2034f8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2034F8u;
    SET_GPR_U32(ctx, 31, 0x203500u);
    ctx->pc = 0x2034FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034F8u;
    // 0x2034fc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2034F8u, 0x203500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203500u;
label_203500:
    // 0x203500: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203504: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x203508: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x203508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20350c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x20350Cu;
    {
        const bool branch_taken_0x20350c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20350Cu;
        // 0x203510: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20350c) {
            ctx->pc = 0x203548u;
            goto label_203548;
        }
    }
    ctx->pc = 0x203514u;
    // 0x203514: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x203514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x203518: 0x8c629160  lw          $v0, -0x6EA0($v1)
    ctx->pc = 0x203518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938976)));
    // 0x20351c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x20351cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x203520: 0x24a58f20  addiu       $a1, $a1, -0x70E0
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938400));
    // 0x203524: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203528: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x203528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20352c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x20352Cu;
    SET_GPR_U32(ctx, 31, 0x203534u);
    ctx->pc = 0x203530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20352Cu;
    // 0x203530: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x20352Cu, 0x203534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203534u;
label_203534:
    // 0x203534: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203538: 0xc0d75d0  jal         func_35D740
    ctx->pc = 0x203538u;
    SET_GPR_U32(ctx, 31, 0x203540u);
    ctx->pc = 0x20353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203538u;
    // 0x20353c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x203538u, 0x203540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203540u;
label_203540:
    // 0x203540: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x203540u;
    {
        const bool branch_taken_0x203540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203540) {
            ctx->pc = 0x203568u;
            goto label_203568;
        }
    }
    ctx->pc = 0x203548u;
label_203548:
    // 0x203548: 0xc075e16  jal         func_1D7858
    ctx->pc = 0x203548u;
    SET_GPR_U32(ctx, 31, 0x203550u);
    ctx->pc = 0x20354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203548u;
    // 0x20354c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7858u, 0x203548u, 0x203550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203550u;
label_203550:
    // 0x203550: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203554: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x203554u;
    SET_GPR_U32(ctx, 31, 0x20355Cu);
    ctx->pc = 0x203558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203554u;
    // 0x203558: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x203554u, 0x20355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20355Cu;
label_20355c:
    // 0x20355c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203560: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203560u;
    SET_GPR_U32(ctx, 31, 0x203568u);
    ctx->pc = 0x203564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203560u;
    // 0x203564: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203560u, 0x203568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203568u;
label_203568:
    // 0x203568: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x203568u;
    SET_GPR_U32(ctx, 31, 0x203570u);
    ctx->pc = 0x20356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203568u;
    // 0x20356c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x203568u, 0x203570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203570u;
label_203570:
    // 0x203570: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x203570u;
    SET_GPR_U32(ctx, 31, 0x203578u);
    ctx->pc = 0x203574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203570u;
    // 0x203574: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x203570u, 0x203578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203578u;
label_203578:
    // 0x203578: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20357c: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x20357cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x203580: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x203580u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x203584: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x203584u;
    {
        const bool branch_taken_0x203584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203584u;
        // 0x203588: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203584) {
            ctx->pc = 0x203670u;
            goto label_203670;
        }
    }
    ctx->pc = 0x20358Cu;
    // 0x20358c: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x20358Cu;
    SET_GPR_U32(ctx, 31, 0x203594u);
    ctx->pc = 0x203590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20358Cu;
    // 0x203590: 0x2450ec20  addiu       $s0, $v0, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x20358Cu, 0x203594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203594u;
label_203594:
    // 0x203594: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x203594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x203598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20359c: 0xc0d74e8  jal         func_35D3A0
    ctx->pc = 0x20359Cu;
    SET_GPR_U32(ctx, 31, 0x2035A4u);
    ctx->pc = 0x2035A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20359Cu;
    // 0x2035a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x20359Cu, 0x2035A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035A4u;
label_2035a4:
    // 0x2035a4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2035a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2035a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2035a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035ac: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x2035ACu;
    SET_GPR_U32(ctx, 31, 0x2035B4u);
    ctx->pc = 0x2035B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035ACu;
    // 0x2035b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x2035ACu, 0x2035B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035B4u;
label_2035b4:
    // 0x2035b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2035b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2035b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2035b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035bc: 0x244607c0  addiu       $a2, $v0, 0x7C0
    ctx->pc = 0x2035bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x2035c0: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x2035C0u;
    SET_GPR_U32(ctx, 31, 0x2035C8u);
    ctx->pc = 0x2035C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035C0u;
    // 0x2035c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2035C0u, 0x2035C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035C8u;
label_2035c8:
    // 0x2035c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2035c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035cc: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2035CCu;
    SET_GPR_U32(ctx, 31, 0x2035D4u);
    ctx->pc = 0x2035D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035CCu;
    // 0x2035d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2035CCu, 0x2035D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035D4u;
label_2035d4:
    // 0x2035d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2035d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2035D8u;
    SET_GPR_U32(ctx, 31, 0x2035E0u);
    ctx->pc = 0x2035DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D8u;
    // 0x2035dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2035D8u, 0x2035E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035E0u;
label_2035e0:
    // 0x2035e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2035e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2035E4u;
    SET_GPR_U32(ctx, 31, 0x2035ECu);
    ctx->pc = 0x2035E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035E4u;
    // 0x2035e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2035E4u, 0x2035ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035ECu;
label_2035ec:
    // 0x2035ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2035ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2035F0u;
    SET_GPR_U32(ctx, 31, 0x2035F8u);
    ctx->pc = 0x2035F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035F0u;
    // 0x2035f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2035F0u, 0x2035F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035F8u;
label_2035f8:
    // 0x2035f8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2035f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2035fc: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x2035FCu;
    SET_GPR_U32(ctx, 31, 0x203604u);
    ctx->pc = 0x203600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035FCu;
    // 0x203600: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x2035FCu, 0x203604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203604u;
label_203604:
    // 0x203604: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x203604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20360c: 0xc0d74e8  jal         func_35D3A0
    ctx->pc = 0x20360Cu;
    SET_GPR_U32(ctx, 31, 0x203614u);
    ctx->pc = 0x203610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20360Cu;
    // 0x203610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x20360Cu, 0x203614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203614u;
label_203614:
    // 0x203614: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x203614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20361c: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x20361Cu;
    SET_GPR_U32(ctx, 31, 0x203624u);
    ctx->pc = 0x203620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20361Cu;
    // 0x203620: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x20361Cu, 0x203624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203624u;
label_203624:
    // 0x203624: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x203624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x203628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20362c: 0x244607c8  addiu       $a2, $v0, 0x7C8
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1992));
    // 0x203630: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x203630u;
    SET_GPR_U32(ctx, 31, 0x203638u);
    ctx->pc = 0x203634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203630u;
    // 0x203634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x203630u, 0x203638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203638u;
label_203638:
    // 0x203638: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x203638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20363c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x20363Cu;
    SET_GPR_U32(ctx, 31, 0x203644u);
    ctx->pc = 0x203640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20363Cu;
    // 0x203640: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x20363Cu, 0x203644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203644u;
label_203644:
    // 0x203644: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203648: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203648u;
    SET_GPR_U32(ctx, 31, 0x203650u);
    ctx->pc = 0x20364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203648u;
    // 0x20364c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203648u, 0x203650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203650u;
label_203650:
    // 0x203650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203654: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203654u;
    SET_GPR_U32(ctx, 31, 0x20365Cu);
    ctx->pc = 0x203658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203654u;
    // 0x203658: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203654u, 0x20365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20365Cu;
label_20365c:
    // 0x20365c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203660: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203660u;
    SET_GPR_U32(ctx, 31, 0x203668u);
    ctx->pc = 0x203664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203660u;
    // 0x203664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203660u, 0x203668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203668u;
label_203668:
    // 0x203668: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x203668u;
    {
        const bool branch_taken_0x203668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203668) {
            ctx->pc = 0x20374Cu;
            goto label_20374c;
        }
    }
    ctx->pc = 0x203670u;
label_203670:
    // 0x203670: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x203670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x203674: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x203674u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x203678: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x203678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20367c: 0x26100468  addiu       $s0, $s0, 0x468
    ctx->pc = 0x20367cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1128));
    // 0x203680: 0x26520958  addiu       $s2, $s2, 0x958
    ctx->pc = 0x203680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2392));
    // 0x203684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20368c: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x20368Cu;
    SET_GPR_U32(ctx, 31, 0x203694u);
    ctx->pc = 0x203690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20368Cu;
    // 0x203690: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x20368Cu, 0x203694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203694u;
label_203694:
    // 0x203694: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x203694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203698: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20369c: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x20369Cu;
    SET_GPR_U32(ctx, 31, 0x2036A4u);
    ctx->pc = 0x2036A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20369Cu;
    // 0x2036a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x20369Cu, 0x2036A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036A4u;
label_2036a4:
    // 0x2036a4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2036a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2036a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036ac: 0x244607c0  addiu       $a2, $v0, 0x7C0
    ctx->pc = 0x2036acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x2036b0: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x2036B0u;
    SET_GPR_U32(ctx, 31, 0x2036B8u);
    ctx->pc = 0x2036B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036B0u;
    // 0x2036b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2036B0u, 0x2036B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036B8u;
label_2036b8:
    // 0x2036b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2036b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036bc: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2036BCu;
    SET_GPR_U32(ctx, 31, 0x2036C4u);
    ctx->pc = 0x2036C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036BCu;
    // 0x2036c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2036BCu, 0x2036C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036C4u;
label_2036c4:
    // 0x2036c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2036c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2036C8u;
    SET_GPR_U32(ctx, 31, 0x2036D0u);
    ctx->pc = 0x2036CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036C8u;
    // 0x2036cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2036C8u, 0x2036D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036D0u;
label_2036d0:
    // 0x2036d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036d4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2036D4u;
    SET_GPR_U32(ctx, 31, 0x2036DCu);
    ctx->pc = 0x2036D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036D4u;
    // 0x2036d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2036D4u, 0x2036DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036DCu;
label_2036dc:
    // 0x2036dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2036dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036e0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2036E0u;
    SET_GPR_U32(ctx, 31, 0x2036E8u);
    ctx->pc = 0x2036E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036E0u;
    // 0x2036e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2036E0u, 0x2036E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036E8u;
label_2036e8:
    // 0x2036e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2036e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2036ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036f0: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x2036F0u;
    SET_GPR_U32(ctx, 31, 0x2036F8u);
    ctx->pc = 0x2036F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036F0u;
    // 0x2036f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2036F0u, 0x2036F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036F8u;
label_2036f8:
    // 0x2036f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2036f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2036fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2036fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203700: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x203700u;
    SET_GPR_U32(ctx, 31, 0x203708u);
    ctx->pc = 0x203704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203700u;
    // 0x203704: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x203700u, 0x203708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203708u;
label_203708:
    // 0x203708: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x203708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20370c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203710: 0x244607c8  addiu       $a2, $v0, 0x7C8
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1992));
    // 0x203714: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x203714u;
    SET_GPR_U32(ctx, 31, 0x20371Cu);
    ctx->pc = 0x203718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203714u;
    // 0x203718: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x203714u, 0x20371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20371Cu;
label_20371c:
    // 0x20371c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203720: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x203720u;
    SET_GPR_U32(ctx, 31, 0x203728u);
    ctx->pc = 0x203724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203720u;
    // 0x203724: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x203720u, 0x203728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203728u;
label_203728:
    // 0x203728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20372c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20372Cu;
    SET_GPR_U32(ctx, 31, 0x203734u);
    ctx->pc = 0x203730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20372Cu;
    // 0x203730: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20372Cu, 0x203734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203734u;
label_203734:
    // 0x203734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203738: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203738u;
    SET_GPR_U32(ctx, 31, 0x203740u);
    ctx->pc = 0x20373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203738u;
    // 0x20373c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203738u, 0x203740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203740u;
label_203740:
    // 0x203740: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203744: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203744u;
    SET_GPR_U32(ctx, 31, 0x20374Cu);
    ctx->pc = 0x203748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203744u;
    // 0x203748: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203744u, 0x20374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20374Cu;
label_20374c:
    // 0x20374c: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x20374Cu;
    SET_GPR_U32(ctx, 31, 0x203754u);
    ctx->pc = 0x203750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20374Cu;
    // 0x203750: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x20374Cu, 0x203754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203754u;
label_203754:
    // 0x203754: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x203754u;
    SET_GPR_U32(ctx, 31, 0x20375Cu);
    ctx->pc = 0x203758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203754u;
    // 0x203758: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x203754u, 0x20375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20375Cu;
label_20375c:
    // 0x20375c: 0xc0807a4  jal         func_201E90
    ctx->pc = 0x20375Cu;
    SET_GPR_U32(ctx, 31, 0x203764u);
    ctx->pc = 0x203760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20375Cu;
    // 0x203760: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E90u, 0x20375Cu, 0x203764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203764u;
label_203764:
    // 0x203764: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x203764u;
    {
        const bool branch_taken_0x203764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203764u;
        // 0x203768: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203764) {
            ctx->pc = 0x2037B0u;
            goto label_2037b0;
        }
    }
    ctx->pc = 0x20376Cu;
    // 0x20376c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203770: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203770u;
    SET_GPR_U32(ctx, 31, 0x203778u);
    ctx->pc = 0x203774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203770u;
    // 0x203774: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203770u, 0x203778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203778u;
label_203778:
    // 0x203778: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x203778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20377c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20377Cu;
    SET_GPR_U32(ctx, 31, 0x203784u);
    ctx->pc = 0x203780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20377Cu;
    // 0x203780: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20377Cu, 0x203784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203784u;
label_203784:
    // 0x203784: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203788: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203788u;
    SET_GPR_U32(ctx, 31, 0x203790u);
    ctx->pc = 0x20378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203788u;
    // 0x20378c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203788u, 0x203790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203790u;
label_203790:
    // 0x203790: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x203790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x203794: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203794u;
    SET_GPR_U32(ctx, 31, 0x20379Cu);
    ctx->pc = 0x203798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203794u;
    // 0x203798: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203794u, 0x20379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20379Cu;
label_20379c:
    // 0x20379c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037a0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2037A0u;
    SET_GPR_U32(ctx, 31, 0x2037A8u);
    ctx->pc = 0x2037A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037A0u;
    // 0x2037a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2037A0u, 0x2037A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037A8u;
label_2037a8:
    // 0x2037a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2037A8u;
    {
        const bool branch_taken_0x2037a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037A8u;
        // 0x2037ac: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037a8) {
            ctx->pc = 0x203838u;
            goto label_203838;
        }
    }
    ctx->pc = 0x2037B0u;
label_2037b0:
    // 0x2037b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2037b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037b4: 0xc080924  jal         func_202490
    ctx->pc = 0x2037B4u;
    SET_GPR_U32(ctx, 31, 0x2037BCu);
    ctx->pc = 0x2037B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037B4u;
    // 0x2037b8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202490u, 0x2037B4u, 0x2037BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037BCu;
label_2037bc:
    // 0x2037bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2037BCu;
    {
        const bool branch_taken_0x2037bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037BCu;
        // 0x2037c0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037bc) {
            ctx->pc = 0x2037DCu;
            goto label_2037dc;
        }
    }
    ctx->pc = 0x2037C4u;
    // 0x2037c4: 0x0  nop
    ctx->pc = 0x2037c4u;
    // NOP
label_2037c8:
    // 0x2037c8: 0xc082662  jal         func_209988
    ctx->pc = 0x2037C8u;
    SET_GPR_U32(ctx, 31, 0x2037D0u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x2037C8u, 0x2037D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037D0u;
label_2037d0:
    // 0x2037d0: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2037D0u;
    SET_GPR_U32(ctx, 31, 0x2037D8u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2037D0u, 0x2037D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037D8u;
label_2037d8:
    // 0x2037d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2037d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2037dc:
    // 0x2037dc: 0xc080a12  jal         func_202848
    ctx->pc = 0x2037DCu;
    SET_GPR_U32(ctx, 31, 0x2037E4u);
    ctx->pc = 0x2037E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037DCu;
    // 0x2037e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202848u, 0x2037DCu, 0x2037E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037E4u;
label_2037e4:
    // 0x2037e4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2037E4u;
    {
        const bool branch_taken_0x2037e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037E4u;
        // 0x2037e8: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037e4) {
            ctx->pc = 0x2037C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2037c8;
        }
    }
    ctx->pc = 0x2037ECu;
    // 0x2037ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2037ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037f0: 0xc08093a  jal         func_2024E8
    ctx->pc = 0x2037F0u;
    SET_GPR_U32(ctx, 31, 0x2037F8u);
    ctx->pc = 0x2037F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037F0u;
    // 0x2037f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024E8u, 0x2037F0u, 0x2037F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037F8u;
label_2037f8:
    // 0x2037f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2037f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2037FCu;
    SET_GPR_U32(ctx, 31, 0x203804u);
    ctx->pc = 0x203800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037FCu;
    // 0x203800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2037FCu, 0x203804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203804u;
label_203804:
    // 0x203804: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x203804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203808: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203808u;
    SET_GPR_U32(ctx, 31, 0x203810u);
    ctx->pc = 0x20380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203808u;
    // 0x20380c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203808u, 0x203810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203810u;
label_203810:
    // 0x203810: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203814: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203814u;
    SET_GPR_U32(ctx, 31, 0x20381Cu);
    ctx->pc = 0x203818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203814u;
    // 0x203818: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203814u, 0x20381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20381Cu;
label_20381c:
    // 0x20381c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x20381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x203820: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203820u;
    SET_GPR_U32(ctx, 31, 0x203828u);
    ctx->pc = 0x203824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203820u;
    // 0x203824: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203820u, 0x203828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203828u;
label_203828:
    // 0x203828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x203828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20382c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20382Cu;
    SET_GPR_U32(ctx, 31, 0x203834u);
    ctx->pc = 0x203830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20382Cu;
    // 0x203830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20382Cu, 0x203834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203834u;
label_203834:
    // 0x203834: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x203834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_203838:
    // 0x203838: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x203838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x20383c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x20383cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x203840: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x203840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x203844: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x203844u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x203848: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x203848u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20384c: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x20384cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203850: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x203850u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x203854: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x203854u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x203858: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x203858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x20385c: 0x3e00008  jr          $ra
    ctx->pc = 0x20385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20385Cu;
        // 0x203860: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203864u;
    // 0x203864: 0x0  nop
    ctx->pc = 0x203864u;
    // NOP
    ctx->pc = 0x203868u;
}
