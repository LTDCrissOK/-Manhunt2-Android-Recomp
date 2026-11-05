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

// Function: sub_002891C0
// Address: 0x2891c0 - 0x289468
void sub_002891C0_0x2891c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002891C0_0x2891c0");
#endif

    switch (ctx->pc) {
        case 0x2891d0u: goto label_2891d0;
        case 0x2891d8u: goto label_2891d8;
        case 0x2891e0u: goto label_2891e0;
        case 0x2891fcu: goto label_2891fc;
        case 0x289204u: goto label_289204;
        case 0x289240u: goto label_289240;
        case 0x289248u: goto label_289248;
        case 0x289258u: goto label_289258;
        case 0x289260u: goto label_289260;
        case 0x289270u: goto label_289270;
        case 0x289280u: goto label_289280;
        case 0x289290u: goto label_289290;
        case 0x2892a0u: goto label_2892a0;
        case 0x2892b0u: goto label_2892b0;
        case 0x2892c0u: goto label_2892c0;
        case 0x2892d0u: goto label_2892d0;
        case 0x2892e0u: goto label_2892e0;
        case 0x2892f0u: goto label_2892f0;
        case 0x289300u: goto label_289300;
        case 0x289310u: goto label_289310;
        case 0x289320u: goto label_289320;
        case 0x289330u: goto label_289330;
        case 0x289340u: goto label_289340;
        case 0x289350u: goto label_289350;
        case 0x289360u: goto label_289360;
        case 0x289370u: goto label_289370;
        case 0x289380u: goto label_289380;
        case 0x289390u: goto label_289390;
        case 0x2893a0u: goto label_2893a0;
        case 0x2893b0u: goto label_2893b0;
        case 0x2893c0u: goto label_2893c0;
        case 0x2893d0u: goto label_2893d0;
        case 0x2893e0u: goto label_2893e0;
        case 0x2893f0u: goto label_2893f0;
        case 0x289400u: goto label_289400;
        case 0x289410u: goto label_289410;
        case 0x289420u: goto label_289420;
        case 0x289430u: goto label_289430;
        case 0x289440u: goto label_289440;
        case 0x289450u: goto label_289450;
        case 0x289460u: goto label_289460;
        default: break;
    }

    ctx->pc = 0x2891c0u;

    // 0x2891c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2891c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2891c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2891c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2891c8: 0xc0a22a4  jal         func_288A90
    ctx->pc = 0x2891C8u;
    SET_GPR_U32(ctx, 31, 0x2891D0u);
    ctx->pc = 0x288A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A90u, 0x2891C8u, 0x2891D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891D0u;
label_2891d0:
    // 0x2891d0: 0xc0a22d4  jal         func_288B50
    ctx->pc = 0x2891D0u;
    SET_GPR_U32(ctx, 31, 0x2891D8u);
    ctx->pc = 0x288B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B50u, 0x2891D0u, 0x2891D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891D8u;
label_2891d8:
    // 0x2891d8: 0xc0a2460  jal         func_289180
    ctx->pc = 0x2891D8u;
    SET_GPR_U32(ctx, 31, 0x2891E0u);
    ctx->pc = 0x289180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289180u, 0x2891D8u, 0x2891E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891E0u;
label_2891e0:
    // 0x2891e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2891E0u;
    {
        const bool branch_taken_0x2891e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891E0u;
        // 0x2891e4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891e0) {
            ctx->pc = 0x28920Cu;
            goto label_28920c;
        }
    }
    ctx->pc = 0x2891E8u;
    // 0x2891e8: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x2891e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943520)));
    // 0x2891ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2891ECu;
    {
        const bool branch_taken_0x2891ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891ECu;
        // 0x2891f0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891ec) {
            ctx->pc = 0x289210u;
            goto label_289210;
        }
    }
    ctx->pc = 0x2891F4u;
    // 0x2891f4: 0xc0a2766  jal         func_289D98
    ctx->pc = 0x2891F4u;
    SET_GPR_U32(ctx, 31, 0x2891FCu);
    ctx->pc = 0x289D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289D98u, 0x2891F4u, 0x2891FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891FCu;
label_2891fc:
    // 0x2891fc: 0xc0a1d48  jal         func_287520
    ctx->pc = 0x2891FCu;
    SET_GPR_U32(ctx, 31, 0x289204u);
    ctx->pc = 0x287520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287520u, 0x2891FCu, 0x289204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289204u;
label_289204:
    // 0x289204: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x289204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x289208: 0xac622b38  sw          $v0, 0x2B38($v1)
    ctx->pc = 0x289208u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B38u, _value); } while (0);
label_28920c:
    // 0x28920c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_289210:
    // 0x289210: 0x8c44a4fc  lw          $a0, -0x5B04($v0)
    ctx->pc = 0x289210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943996)));
    // 0x289214: 0x2c830035  sltiu       $v1, $a0, 0x35
    ctx->pc = 0x289214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x289218: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x289218u;
    {
        const bool branch_taken_0x289218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289218u;
        // 0x28921c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289218) {
            ctx->pc = 0x289480u;
            return;
        }
    }
    ctx->pc = 0x289220u;
    // 0x289220: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x289220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x289224: 0x2442ad10  addiu       $v0, $v0, -0x52F0
    ctx->pc = 0x289224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946064));
    // 0x289228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28922c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289230: 0x800008  jr          $a0
    ctx->pc = 0x289230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289238u: goto label_289238;
            case 0x289250u: goto label_289250;
            case 0x289268u: goto label_289268;
            case 0x289278u: goto label_289278;
            case 0x289288u: goto label_289288;
            case 0x289298u: goto label_289298;
            case 0x2892A8u: goto label_2892a8;
            case 0x2892B8u: goto label_2892b8;
            case 0x2892C8u: goto label_2892c8;
            case 0x2892D8u: goto label_2892d8;
            case 0x2892E8u: goto label_2892e8;
            case 0x2892F8u: goto label_2892f8;
            case 0x289308u: goto label_289308;
            case 0x289318u: goto label_289318;
            case 0x289328u: goto label_289328;
            case 0x289338u: goto label_289338;
            case 0x289348u: goto label_289348;
            case 0x289358u: goto label_289358;
            case 0x289368u: goto label_289368;
            case 0x289378u: goto label_289378;
            case 0x289388u: goto label_289388;
            case 0x289398u: goto label_289398;
            case 0x2893A8u: goto label_2893a8;
            case 0x2893B8u: goto label_2893b8;
            case 0x2893C8u: goto label_2893c8;
            case 0x2893D8u: goto label_2893d8;
            case 0x2893E8u: goto label_2893e8;
            case 0x2893F8u: goto label_2893f8;
            case 0x289408u: goto label_289408;
            case 0x289418u: goto label_289418;
            case 0x289428u: goto label_289428;
            case 0x289438u: goto label_289438;
            case 0x289448u: goto label_289448;
            case 0x289458u: goto label_289458;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289230u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289238u;
label_289238:
    // 0x289238: 0xc0a2700  jal         func_289C00
    ctx->pc = 0x289238u;
    SET_GPR_U32(ctx, 31, 0x289240u);
    ctx->pc = 0x289C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289C00u, 0x289238u, 0x289240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289240u;
label_289240:
    // 0x289240: 0xc0a2766  jal         func_289D98
    ctx->pc = 0x289240u;
    SET_GPR_U32(ctx, 31, 0x289248u);
    ctx->pc = 0x289D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289D98u, 0x289240u, 0x289248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289248u;
label_289248:
    // 0x289248: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x289248u;
    {
        const bool branch_taken_0x289248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289248u;
        // 0x28924c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289248) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289250u;
label_289250:
    // 0x289250: 0xc0a2664  jal         func_289990
    ctx->pc = 0x289250u;
    SET_GPR_U32(ctx, 31, 0x289258u);
    ctx->pc = 0x289990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289990u, 0x289250u, 0x289258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289258u;
label_289258:
    // 0x289258: 0xc0a2766  jal         func_289D98
    ctx->pc = 0x289258u;
    SET_GPR_U32(ctx, 31, 0x289260u);
    ctx->pc = 0x289D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289D98u, 0x289258u, 0x289260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289260u;
label_289260:
    // 0x289260: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x289260u;
    {
        const bool branch_taken_0x289260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289260u;
        // 0x289264: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289260) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289268u;
label_289268:
    // 0x289268: 0xc0a2764  jal         func_289D90
    ctx->pc = 0x289268u;
    SET_GPR_U32(ctx, 31, 0x289270u);
    ctx->pc = 0x289D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289D90u, 0x289268u, 0x289270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289270u;
label_289270:
    // 0x289270: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x289270u;
    {
        const bool branch_taken_0x289270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289270u;
        // 0x289274: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289270) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289278u;
label_289278:
    // 0x289278: 0xc0a27a6  jal         func_289E98
    ctx->pc = 0x289278u;
    SET_GPR_U32(ctx, 31, 0x289280u);
    ctx->pc = 0x289E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289E98u, 0x289278u, 0x289280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289280u;
label_289280:
    // 0x289280: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x289280u;
    {
        const bool branch_taken_0x289280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289280u;
        // 0x289284: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289280) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289288u;
label_289288:
    // 0x289288: 0xc0a27e4  jal         func_289F90
    ctx->pc = 0x289288u;
    SET_GPR_U32(ctx, 31, 0x289290u);
    ctx->pc = 0x289F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289F90u, 0x289288u, 0x289290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289290u;
label_289290:
    // 0x289290: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x289290u;
    {
        const bool branch_taken_0x289290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289290u;
        // 0x289294: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289290) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289298u;
label_289298:
    // 0x289298: 0xc0a2804  jal         func_28A010
    ctx->pc = 0x289298u;
    SET_GPR_U32(ctx, 31, 0x2892A0u);
    ctx->pc = 0x28A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A010u, 0x289298u, 0x2892A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892A0u;
label_2892a0:
    // 0x2892a0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2892A0u;
    {
        const bool branch_taken_0x2892a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892A0u;
        // 0x2892a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892a0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2892A8u;
label_2892a8:
    // 0x2892a8: 0xc0a2824  jal         func_28A090
    ctx->pc = 0x2892A8u;
    SET_GPR_U32(ctx, 31, 0x2892B0u);
    ctx->pc = 0x28A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A090u, 0x2892A8u, 0x2892B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892B0u;
label_2892b0:
    // 0x2892b0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2892B0u;
    {
        const bool branch_taken_0x2892b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892B0u;
        // 0x2892b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892b0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2892B8u;
label_2892b8:
    // 0x2892b8: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x2892B8u;
    SET_GPR_U32(ctx, 31, 0x2892C0u);
    ctx->pc = 0x28A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A110u, 0x2892B8u, 0x2892C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892C0u;
label_2892c0:
    // 0x2892c0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2892C0u;
    {
        const bool branch_taken_0x2892c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892C0u;
        // 0x2892c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892c0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2892C8u;
label_2892c8:
    // 0x2892c8: 0xc0a2864  jal         func_28A190
    ctx->pc = 0x2892C8u;
    SET_GPR_U32(ctx, 31, 0x2892D0u);
    ctx->pc = 0x28A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A190u, 0x2892C8u, 0x2892D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892D0u;
label_2892d0:
    // 0x2892d0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2892D0u;
    {
        const bool branch_taken_0x2892d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892D0u;
        // 0x2892d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892d0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2892D8u;
label_2892d8:
    // 0x2892d8: 0xc0a2886  jal         func_28A218
    ctx->pc = 0x2892D8u;
    SET_GPR_U32(ctx, 31, 0x2892E0u);
    ctx->pc = 0x28A218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A218u, 0x2892D8u, 0x2892E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892E0u;
label_2892e0:
    // 0x2892e0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2892E0u;
    {
        const bool branch_taken_0x2892e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892E0u;
        // 0x2892e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892e0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2892E8u;
label_2892e8:
    // 0x2892e8: 0xc0a2888  jal         func_28A220
    ctx->pc = 0x2892E8u;
    SET_GPR_U32(ctx, 31, 0x2892F0u);
    ctx->pc = 0x28A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A220u, 0x2892E8u, 0x2892F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892F0u;
label_2892f0:
    // 0x2892f0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2892F0u;
    {
        const bool branch_taken_0x2892f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892F0u;
        // 0x2892f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892f0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2892F8u;
label_2892f8:
    // 0x2892f8: 0xc0a28aa  jal         func_28A2A8
    ctx->pc = 0x2892F8u;
    SET_GPR_U32(ctx, 31, 0x289300u);
    ctx->pc = 0x28A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A2A8u, 0x2892F8u, 0x289300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289300u;
label_289300:
    // 0x289300: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x289300u;
    {
        const bool branch_taken_0x289300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289300u;
        // 0x289304: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289300) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289308u;
label_289308:
    // 0x289308: 0xc0a28ca  jal         func_28A328
    ctx->pc = 0x289308u;
    SET_GPR_U32(ctx, 31, 0x289310u);
    ctx->pc = 0x28A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A328u, 0x289308u, 0x289310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289310u;
label_289310:
    // 0x289310: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x289310u;
    {
        const bool branch_taken_0x289310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289310u;
        // 0x289314: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289310) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289318u;
label_289318:
    // 0x289318: 0xc0a28cc  jal         func_28A330
    ctx->pc = 0x289318u;
    SET_GPR_U32(ctx, 31, 0x289320u);
    ctx->pc = 0x28A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A330u, 0x289318u, 0x289320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289320u;
label_289320:
    // 0x289320: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x289320u;
    {
        const bool branch_taken_0x289320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289320u;
        // 0x289324: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289320) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289328u;
label_289328:
    // 0x289328: 0xc0a2770  jal         func_289DC0
    ctx->pc = 0x289328u;
    SET_GPR_U32(ctx, 31, 0x289330u);
    ctx->pc = 0x289DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289DC0u, 0x289328u, 0x289330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289330u;
label_289330:
    // 0x289330: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x289330u;
    {
        const bool branch_taken_0x289330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289330u;
        // 0x289334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289330) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289338u;
label_289338:
    // 0x289338: 0xc0a2908  jal         func_28A420
    ctx->pc = 0x289338u;
    SET_GPR_U32(ctx, 31, 0x289340u);
    ctx->pc = 0x28A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A420u, 0x289338u, 0x289340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289340u;
label_289340:
    // 0x289340: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x289340u;
    {
        const bool branch_taken_0x289340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289340u;
        // 0x289344: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289340) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289348u;
label_289348:
    // 0x289348: 0xc0a293e  jal         func_28A4F8
    ctx->pc = 0x289348u;
    SET_GPR_U32(ctx, 31, 0x289350u);
    ctx->pc = 0x28A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A4F8u, 0x289348u, 0x289350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289350u;
label_289350:
    // 0x289350: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x289350u;
    {
        const bool branch_taken_0x289350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289350u;
        // 0x289354: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289350) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289358u;
label_289358:
    // 0x289358: 0xc0a2958  jal         func_28A560
    ctx->pc = 0x289358u;
    SET_GPR_U32(ctx, 31, 0x289360u);
    ctx->pc = 0x28A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A560u, 0x289358u, 0x289360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289360u;
label_289360:
    // 0x289360: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x289360u;
    {
        const bool branch_taken_0x289360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289360u;
        // 0x289364: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289360) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289368u;
label_289368:
    // 0x289368: 0xc0a295a  jal         func_28A568
    ctx->pc = 0x289368u;
    SET_GPR_U32(ctx, 31, 0x289370u);
    ctx->pc = 0x28A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A568u, 0x289368u, 0x289370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289370u;
label_289370:
    // 0x289370: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x289370u;
    {
        const bool branch_taken_0x289370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289370u;
        // 0x289374: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289370) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289378u;
label_289378:
    // 0x289378: 0xc0a297e  jal         func_28A5F8
    ctx->pc = 0x289378u;
    SET_GPR_U32(ctx, 31, 0x289380u);
    ctx->pc = 0x28A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A5F8u, 0x289378u, 0x289380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289380u;
label_289380:
    // 0x289380: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x289380u;
    {
        const bool branch_taken_0x289380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289380u;
        // 0x289384: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289380) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289388u;
label_289388:
    // 0x289388: 0xc0a29a2  jal         func_28A688
    ctx->pc = 0x289388u;
    SET_GPR_U32(ctx, 31, 0x289390u);
    ctx->pc = 0x28A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A688u, 0x289388u, 0x289390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289390u;
label_289390:
    // 0x289390: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x289390u;
    {
        const bool branch_taken_0x289390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289390u;
        // 0x289394: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289390) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289398u;
label_289398:
    // 0x289398: 0xc0a29c6  jal         func_28A718
    ctx->pc = 0x289398u;
    SET_GPR_U32(ctx, 31, 0x2893A0u);
    ctx->pc = 0x28A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A718u, 0x289398u, 0x2893A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893A0u;
label_2893a0:
    // 0x2893a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2893A0u;
    {
        const bool branch_taken_0x2893a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893A0u;
        // 0x2893a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893a0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2893A8u;
label_2893a8:
    // 0x2893a8: 0xc0a2524  jal         func_289490
    ctx->pc = 0x2893A8u;
    SET_GPR_U32(ctx, 31, 0x2893B0u);
    ctx->pc = 0x289490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289490u, 0x2893A8u, 0x2893B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893B0u;
label_2893b0:
    // 0x2893b0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2893B0u;
    {
        const bool branch_taken_0x2893b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893B0u;
        // 0x2893b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893b0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2893B8u;
label_2893b8:
    // 0x2893b8: 0xc0a2544  jal         func_289510
    ctx->pc = 0x2893B8u;
    SET_GPR_U32(ctx, 31, 0x2893C0u);
    ctx->pc = 0x289510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289510u, 0x2893B8u, 0x2893C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893C0u;
label_2893c0:
    // 0x2893c0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2893C0u;
    {
        const bool branch_taken_0x2893c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893C0u;
        // 0x2893c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893c0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2893C8u;
label_2893c8:
    // 0x2893c8: 0xc0a2564  jal         func_289590
    ctx->pc = 0x2893C8u;
    SET_GPR_U32(ctx, 31, 0x2893D0u);
    ctx->pc = 0x289590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289590u, 0x2893C8u, 0x2893D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893D0u;
label_2893d0:
    // 0x2893d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2893D0u;
    {
        const bool branch_taken_0x2893d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893D0u;
        // 0x2893d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893d0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2893D8u;
label_2893d8:
    // 0x2893d8: 0xc0a2584  jal         func_289610
    ctx->pc = 0x2893D8u;
    SET_GPR_U32(ctx, 31, 0x2893E0u);
    ctx->pc = 0x289610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289610u, 0x2893D8u, 0x2893E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893E0u;
label_2893e0:
    // 0x2893e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2893E0u;
    {
        const bool branch_taken_0x2893e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893E0u;
        // 0x2893e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893e0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2893E8u;
label_2893e8:
    // 0x2893e8: 0xc0a25a4  jal         func_289690
    ctx->pc = 0x2893E8u;
    SET_GPR_U32(ctx, 31, 0x2893F0u);
    ctx->pc = 0x289690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289690u, 0x2893E8u, 0x2893F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893F0u;
label_2893f0:
    // 0x2893f0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2893F0u;
    {
        const bool branch_taken_0x2893f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893F0u;
        // 0x2893f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893f0) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x2893F8u;
label_2893f8:
    // 0x2893f8: 0xc0a25c4  jal         func_289710
    ctx->pc = 0x2893F8u;
    SET_GPR_U32(ctx, 31, 0x289400u);
    ctx->pc = 0x289710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289710u, 0x2893F8u, 0x289400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289400u;
label_289400:
    // 0x289400: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x289400u;
    {
        const bool branch_taken_0x289400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289400u;
        // 0x289404: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289400) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289408u;
label_289408:
    // 0x289408: 0xc0a25e4  jal         func_289790
    ctx->pc = 0x289408u;
    SET_GPR_U32(ctx, 31, 0x289410u);
    ctx->pc = 0x289790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289790u, 0x289408u, 0x289410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289410u;
label_289410:
    // 0x289410: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x289410u;
    {
        const bool branch_taken_0x289410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289410u;
        // 0x289414: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289410) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289418u;
label_289418:
    // 0x289418: 0xc0a29ea  jal         func_28A7A8
    ctx->pc = 0x289418u;
    SET_GPR_U32(ctx, 31, 0x289420u);
    ctx->pc = 0x28A7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7A8u, 0x289418u, 0x289420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289420u;
label_289420:
    // 0x289420: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x289420u;
    {
        const bool branch_taken_0x289420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289420u;
        // 0x289424: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289420) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289428u;
label_289428:
    // 0x289428: 0xc0a2a7a  jal         func_28A9E8
    ctx->pc = 0x289428u;
    SET_GPR_U32(ctx, 31, 0x289430u);
    ctx->pc = 0x28A9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A9E8u, 0x289428u, 0x289430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289430u;
label_289430:
    // 0x289430: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x289430u;
    {
        const bool branch_taken_0x289430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289430u;
        // 0x289434: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289430) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289438u;
label_289438:
    // 0x289438: 0xc0a2a0a  jal         func_28A828
    ctx->pc = 0x289438u;
    SET_GPR_U32(ctx, 31, 0x289440u);
    ctx->pc = 0x28A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A828u, 0x289438u, 0x289440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289440u;
label_289440:
    // 0x289440: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x289440u;
    {
        const bool branch_taken_0x289440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289440u;
        // 0x289444: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289440) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289448u;
label_289448:
    // 0x289448: 0xc0a2a3e  jal         func_28A8F8
    ctx->pc = 0x289448u;
    SET_GPR_U32(ctx, 31, 0x289450u);
    ctx->pc = 0x28A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A8F8u, 0x289448u, 0x289450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289450u;
label_289450:
    // 0x289450: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x289450u;
    {
        const bool branch_taken_0x289450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289450u;
        // 0x289454: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289450) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289458u;
label_289458:
    // 0x289458: 0xc0a2a7c  jal         func_28A9F0
    ctx->pc = 0x289458u;
    SET_GPR_U32(ctx, 31, 0x289460u);
    ctx->pc = 0x28A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A9F0u, 0x289458u, 0x289460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289460u;
label_289460:
    // 0x289460: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x289460u;
    {
        const bool branch_taken_0x289460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289460u;
        // 0x289464: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289460) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289468u;
}
