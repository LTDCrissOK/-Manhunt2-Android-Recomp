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

// Function: sub_0038DE28
// Address: 0x38de28 - 0x38dec8
void sub_0038DE28_0x38de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DE28_0x38de28");
#endif

    switch (ctx->pc) {
        case 0x38de44u: goto label_38de44;
        default: break;
    }

    ctx->pc = 0x38de28u;

    // 0x38de28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38de2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38de30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38de34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38de34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38de38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38de3c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x38DE3Cu;
    SET_GPR_U32(ctx, 31, 0x38DE44u);
    ctx->pc = 0x38DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE3Cu;
    // 0x38de40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x38DE3Cu, 0x38DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE44u;
label_38de44:
    // 0x38de44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38de44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38de48: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x38de48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x38de4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x38de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38de50: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38DE50u;
    {
        const bool branch_taken_0x38de50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE50u;
        // 0x38de54: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de50) {
            ctx->pc = 0x38DE6Cu;
            goto label_38de6c;
        }
    }
    ctx->pc = 0x38DE58u;
    // 0x38de58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38de5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38de60: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x38de60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x38de64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38DE64u;
    {
        const bool branch_taken_0x38de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE64u;
        // 0x38de68: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de64) {
            ctx->pc = 0x38DE74u;
            goto label_38de74;
        }
    }
    ctx->pc = 0x38DE6Cu;
label_38de6c:
    // 0x38de6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38de6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38de70: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x38de70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_38de74:
    // 0x38de74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38de74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38de78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38de78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38de7c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x38de7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x38de80: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x38de80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x38de84: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x38de84u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 16)); // MMIO: 0x1000b010
    // 0x38de88: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x38de88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x38de8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x38de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x38de90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38de94: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x38de98: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x38de98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x38de9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38de9cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x38dea0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38DEA0u;
    {
        const bool branch_taken_0x38dea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEA0u;
        // 0x38dea4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dea0) {
            ctx->pc = 0x38DEB8u;
            goto label_38deb8;
        }
    }
    ctx->pc = 0x38DEA8u;
    // 0x38dea8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38dea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38deac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38deacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38deb0: 0x80f401a  j           func_3D0068
    ctx->pc = 0x38DEB0u;
    ctx->pc = 0x38DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DEB0u;
    // 0x38deb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x38DEB8u;
label_38deb8:
    // 0x38deb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38deb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38debc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38debcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dec0: 0x3e00008  jr          $ra
    ctx->pc = 0x38DEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEC0u;
        // 0x38dec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DEC8u;
}
