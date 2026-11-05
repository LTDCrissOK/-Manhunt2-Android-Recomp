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

// Function: sub_00370AF8
// Address: 0x370af8 - 0x370b90
void sub_00370AF8_0x370af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370AF8_0x370af8");
#endif

    switch (ctx->pc) {
        case 0x370b18u: goto label_370b18;
        default: break;
    }

    ctx->pc = 0x370af8u;

    // 0x370af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370b00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x370b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x370b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x370b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370b10: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x370B10u;
    SET_GPR_U32(ctx, 31, 0x370B18u);
    ctx->pc = 0x370B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B10u;
    // 0x370b14: 0x2624003f  addiu       $a0, $s1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x370B10u, 0x370B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B18u;
label_370b18:
    // 0x370b18: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x370b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370b1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x370b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b20: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x370b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x370b24: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x370b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x370b28: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x370b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x370b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b30: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x370b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x370b34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x370b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x370b38: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x370b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x370b3c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x370b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x370b40: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x370b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x370b44: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x370b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
    // 0x370b48: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x370b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x370b4c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x370b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x370b50: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x370b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x370b54: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x370b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x370b58: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x370b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x370b5c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x370b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x370b60: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x370b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x370b64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x370b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x370b68: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x370b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x370b6c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x370b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x370b70: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x370b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x370b74: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x370b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x370b78: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x370b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x370b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x370b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370b88: 0x3e00008  jr          $ra
    ctx->pc = 0x370B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B88u;
        // 0x370b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370B90u;
}
