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

// Function: sub_00322078
// Address: 0x322078 - 0x322120
void sub_00322078_0x322078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322078_0x322078");
#endif

    switch (ctx->pc) {
        case 0x322078u: goto label_322078;
        case 0x32207cu: goto label_32207c;
        case 0x322080u: goto label_322080;
        case 0x322084u: goto label_322084;
        case 0x322088u: goto label_322088;
        case 0x32208cu: goto label_32208c;
        case 0x322090u: goto label_322090;
        case 0x322094u: goto label_322094;
        case 0x322098u: goto label_322098;
        case 0x32209cu: goto label_32209c;
        case 0x3220a0u: goto label_3220a0;
        case 0x3220a4u: goto label_3220a4;
        case 0x3220a8u: goto label_3220a8;
        case 0x3220acu: goto label_3220ac;
        case 0x3220b0u: goto label_3220b0;
        case 0x3220b4u: goto label_3220b4;
        case 0x3220b8u: goto label_3220b8;
        case 0x3220bcu: goto label_3220bc;
        case 0x3220c0u: goto label_3220c0;
        case 0x3220c4u: goto label_3220c4;
        case 0x3220c8u: goto label_3220c8;
        case 0x3220ccu: goto label_3220cc;
        case 0x3220d0u: goto label_3220d0;
        case 0x3220d4u: goto label_3220d4;
        case 0x3220d8u: goto label_3220d8;
        case 0x3220dcu: goto label_3220dc;
        case 0x3220e0u: goto label_3220e0;
        case 0x3220e4u: goto label_3220e4;
        case 0x3220e8u: goto label_3220e8;
        case 0x3220ecu: goto label_3220ec;
        case 0x3220f0u: goto label_3220f0;
        case 0x3220f4u: goto label_3220f4;
        case 0x3220f8u: goto label_3220f8;
        case 0x3220fcu: goto label_3220fc;
        case 0x322100u: goto label_322100;
        case 0x322104u: goto label_322104;
        case 0x322108u: goto label_322108;
        case 0x32210cu: goto label_32210c;
        case 0x322110u: goto label_322110;
        case 0x322114u: goto label_322114;
        case 0x322118u: goto label_322118;
        case 0x32211cu: goto label_32211c;
        default: break;
    }

    ctx->pc = 0x322078u;

label_322078:
    // 0x322078: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x322078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_32207c:
    // 0x32207c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_322080:
    // 0x322080: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x322080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_322084:
    // 0x322084: 0x8c43cba8  lw          $v1, -0x3458($v0)
    ctx->pc = 0x322084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
label_322088:
    // 0x322088: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x322088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32208c:
    // 0x32208c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x32208cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_322090:
    // 0x322090: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x322090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_322094:
    // 0x322094: 0x40f809  jalr        $v0
label_322098:
    if (ctx->pc == 0x322098u) {
        ctx->pc = 0x32209Cu;
        goto label_32209c;
    }
    ctx->pc = 0x322094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32209Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322094u, 0x32209Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32209Cu;
label_32209c:
    // 0x32209c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32209cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3220a0:
    // 0x3220a0: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x3220a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942272)));
label_3220a4:
    // 0x3220a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3220a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3220a8:
    // 0x3220a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3220ac:
    if (ctx->pc == 0x3220ACu) {
        ctx->pc = 0x3220ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220A8u;
        // 0x3220ac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220B0u;
        goto label_3220b0;
    }
    ctx->pc = 0x3220A8u;
    {
        const bool branch_taken_0x3220a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220A8u;
        // 0x3220ac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220a8) {
            ctx->pc = 0x3220E8u;
            goto label_3220e8;
        }
    }
    ctx->pc = 0x3220B0u;
label_3220b0:
    // 0x3220b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3220b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3220b4:
    // 0x3220b4: 0x8c489160  lw          $t0, -0x6EA0($v0)
    ctx->pc = 0x3220b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938976)));
label_3220b8:
    // 0x3220b8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x3220b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_3220bc:
    // 0x3220bc: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x3220bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_3220c0:
    // 0x3220c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3220c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3220c4:
    // 0x3220c4: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3220c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3220c8:
    // 0x3220c8: 0x24e79920  addiu       $a3, $a3, -0x66E0
    ctx->pc = 0x3220c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940960));
label_3220cc:
    // 0x3220cc: 0x8c66ee20  lw          $a2, -0x11E0($v1)
    ctx->pc = 0x3220ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962720)));
label_3220d0:
    // 0x3220d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3220d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3220d4:
    // 0x3220d4: 0x24a54678  addiu       $a1, $a1, 0x4678
    ctx->pc = 0x3220d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18040));
label_3220d8:
    // 0x3220d8: 0xc0efefa  jal         func_3BFBE8
label_3220dc:
    if (ctx->pc == 0x3220DCu) {
        ctx->pc = 0x3220DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220D8u;
        // 0x3220dc: 0x1073821  addu        $a3, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220E0u;
        goto label_3220e0;
    }
    ctx->pc = 0x3220D8u;
    SET_GPR_U32(ctx, 31, 0x3220E0u);
    ctx->pc = 0x3220DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220D8u;
    // 0x3220dc: 0x1073821  addu        $a3, $t0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x3220D8u, 0x3220E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220E0u;
label_3220e0:
    // 0x3220e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3220e4:
    if (ctx->pc == 0x3220E4u) {
        ctx->pc = 0x3220E8u;
        goto label_3220e8;
    }
    ctx->pc = 0x3220E0u;
    {
        const bool branch_taken_0x3220e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3220e0) {
            ctx->pc = 0x322100u;
            goto label_322100;
        }
    }
    ctx->pc = 0x3220E8u;
label_3220e8:
    // 0x3220e8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3220e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_3220ec:
    // 0x3220ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3220ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3220f0:
    // 0x3220f0: 0x8c4621e0  lw          $a2, 0x21E0($v0)
    ctx->pc = 0x3220f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8672)));
label_3220f4:
    // 0x3220f4: 0x24a54688  addiu       $a1, $a1, 0x4688
    ctx->pc = 0x3220f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18056));
label_3220f8:
    // 0x3220f8: 0xc0efefa  jal         func_3BFBE8
label_3220fc:
    if (ctx->pc == 0x3220FCu) {
        ctx->pc = 0x3220FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220F8u;
        // 0x3220fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322100u;
        goto label_322100;
    }
    ctx->pc = 0x3220F8u;
    SET_GPR_U32(ctx, 31, 0x322100u);
    ctx->pc = 0x3220FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220F8u;
    // 0x3220fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x3220F8u, 0x322100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322100u;
label_322100:
    // 0x322100: 0xc0c87be  jal         func_321EF8
label_322104:
    if (ctx->pc == 0x322104u) {
        ctx->pc = 0x322104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322100u;
        // 0x322104: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322108u;
        goto label_322108;
    }
    ctx->pc = 0x322100u;
    SET_GPR_U32(ctx, 31, 0x322108u);
    ctx->pc = 0x322104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322100u;
    // 0x322104: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EF8u, 0x322100u, 0x322108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322108u;
label_322108:
    // 0x322108: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x322108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_32210c:
    // 0x32210c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x32210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_322110:
    // 0x322110: 0xac62be1c  sw          $v0, -0x41E4($v1)
    ctx->pc = 0x322110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950428), GPR_U32(ctx, 2));
label_322114:
    // 0x322114: 0x3e00008  jr          $ra
label_322118:
    if (ctx->pc == 0x322118u) {
        ctx->pc = 0x322118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322114u;
        // 0x322118: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32211Cu;
        goto label_32211c;
    }
    ctx->pc = 0x322114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322114u;
        // 0x322118: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32211Cu;
label_32211c:
    // 0x32211c: 0x0  nop
    ctx->pc = 0x32211cu;
    // NOP
    ctx->pc = 0x322120u;
}
