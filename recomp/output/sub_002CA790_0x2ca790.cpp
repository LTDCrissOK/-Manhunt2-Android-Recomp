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

// Function: sub_002CA790
// Address: 0x2ca790 - 0x2ca848
void sub_002CA790_0x2ca790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA790_0x2ca790");
#endif

    switch (ctx->pc) {
        case 0x2ca7bcu: goto label_2ca7bc;
        case 0x2ca824u: goto label_2ca824;
        case 0x2ca838u: goto label_2ca838;
        default: break;
    }

    ctx->pc = 0x2ca790u;

    // 0x2ca790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca794: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x2ca794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2ca798: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ca798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ca79c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ca79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca7a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ca7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ca7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7a8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2ca7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2ca7ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2ca7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2ca7b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ca7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7b4: 0xc0b2946  jal         func_2CA518
    ctx->pc = 0x2CA7B4u;
    SET_GPR_U32(ctx, 31, 0x2CA7BCu);
    ctx->pc = 0x2CA7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7B4u;
    // 0x2ca7b8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA518u, 0x2CA7B4u, 0x2CA7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7BCu;
label_2ca7bc:
    // 0x2ca7bc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ca7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca7c0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2ca7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2ca7c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ca7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ca7c8: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x2ca7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x2ca7cc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2ca7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ca7d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ca7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ca7d4: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x2ca7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x2ca7d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ca7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ca7dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ca7dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ca7e0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2ca7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2ca7e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ca7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca7e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ca7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ca7ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ca7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ca7f0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2ca7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2ca7f4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2ca7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca7f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2ca7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ca7fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ca7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ca800: 0x2c430800  sltiu       $v1, $v0, 0x800
    ctx->pc = 0x2ca800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x2ca804: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA804u;
    {
        const bool branch_taken_0x2ca804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA804u;
        // 0x2ca808: 0x22102  srl         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca804) {
            ctx->pc = 0x2CA82Cu;
            goto label_2ca82c;
        }
    }
    ctx->pc = 0x2CA80Cu;
    // 0x2ca80c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ca80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca810: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ca810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ca814: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2ca814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ca818: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2ca818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2ca81c: 0xc0b285c  jal         func_2CA170
    ctx->pc = 0x2CA81Cu;
    SET_GPR_U32(ctx, 31, 0x2CA824u);
    ctx->pc = 0x2CA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA81Cu;
    // 0x2ca820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA170u, 0x2CA81Cu, 0x2CA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA824u;
label_2ca824:
    // 0x2ca824: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA824u;
    {
        const bool branch_taken_0x2ca824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA824u;
        // 0x2ca828: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca824) {
            ctx->pc = 0x2CA83Cu;
            goto label_2ca83c;
        }
    }
    ctx->pc = 0x2CA82Cu;
label_2ca82c:
    // 0x2ca82c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2ca82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ca830: 0xc0b288c  jal         func_2CA230
    ctx->pc = 0x2CA830u;
    SET_GPR_U32(ctx, 31, 0x2CA838u);
    ctx->pc = 0x2CA834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA830u;
    // 0x2ca834: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA230u, 0x2CA830u, 0x2CA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA838u;
label_2ca838:
    // 0x2ca838: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ca838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca83c:
    // 0x2ca83c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ca83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca840: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA840u;
        // 0x2ca844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA848u;
}
