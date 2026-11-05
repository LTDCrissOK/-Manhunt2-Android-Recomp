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

// Function: sub_00277B28
// Address: 0x277b28 - 0x277b90
void sub_00277B28_0x277b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277B28_0x277b28");
#endif

    switch (ctx->pc) {
        case 0x277b60u: goto label_277b60;
        default: break;
    }

    ctx->pc = 0x277b28u;

    // 0x277b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277b2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277b30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x277b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x277b38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x277b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b3c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277b40: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x277b40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x277b44: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x277b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x277b48: 0x24a582c8  addiu       $a1, $a1, -0x7D38
    ctx->pc = 0x277b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935240));
    // 0x277b4c: 0x37a80008  ori         $t0, $sp, 0x8
    ctx->pc = 0x277b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x277b50: 0x37a9000c  ori         $t1, $sp, 0xC
    ctx->pc = 0x277b50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x277b54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x277b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277b58: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277B58u;
    SET_GPR_U32(ctx, 31, 0x277B60u);
    ctx->pc = 0x277B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B58u;
    // 0x277b5c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277B58u, 0x277B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B60u;
label_277b60:
    // 0x277b60: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x277b60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277b64: 0x93a50004  lbu         $a1, 0x4($sp)
    ctx->pc = 0x277b64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x277b68: 0x93a60008  lbu         $a2, 0x8($sp)
    ctx->pc = 0x277b68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277b6c: 0x93a3000c  lbu         $v1, 0xC($sp)
    ctx->pc = 0x277b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x277b70: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x277b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x277b74: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x277b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x277b78: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x277b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x277b7c: 0xa2060002  sb          $a2, 0x2($s0)
    ctx->pc = 0x277b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x277b80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277b84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x277b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277b88: 0x3e00008  jr          $ra
    ctx->pc = 0x277B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B88u;
        // 0x277b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277B90u;
}
