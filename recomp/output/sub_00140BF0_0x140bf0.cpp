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

// Function: sub_00140BF0
// Address: 0x140bf0 - 0x140c58
void sub_00140BF0_0x140bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140BF0_0x140bf0");
#endif

    switch (ctx->pc) {
        case 0x140c34u: goto label_140c34;
        case 0x140c44u: goto label_140c44;
        default: break;
    }

    ctx->pc = 0x140bf0u;

    // 0x140bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140bf4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x140bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x140bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140bfc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x140bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x140c00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140c0c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x140c0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x140c10: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x140c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x140c14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x140c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140c18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x140c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140c1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x140c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x140c20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140c24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140c28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140c2c: 0xc04398a  jal         func_10E628
    ctx->pc = 0x140C2Cu;
    SET_GPR_U32(ctx, 31, 0x140C34u);
    ctx->pc = 0x140C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C2Cu;
    // 0x140c30: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x140C2Cu, 0x140C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C34u;
label_140c34:
    // 0x140c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c3c: 0xc04d91a  jal         func_136468
    ctx->pc = 0x140C3Cu;
    SET_GPR_U32(ctx, 31, 0x140C44u);
    ctx->pc = 0x140C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C3Cu;
    // 0x140c40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x140C3Cu, 0x140C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C44u;
label_140c44:
    // 0x140c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140c48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140c50: 0x3e00008  jr          $ra
    ctx->pc = 0x140C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C50u;
        // 0x140c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140C58u;
}
