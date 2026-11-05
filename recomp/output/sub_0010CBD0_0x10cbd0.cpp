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

// Function: sub_0010CBD0
// Address: 0x10cbd0 - 0x10cc60
void sub_0010CBD0_0x10cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CBD0_0x10cbd0");
#endif

    switch (ctx->pc) {
        case 0x10cbfcu: goto label_10cbfc;
        case 0x10cc0cu: goto label_10cc0c;
        case 0x10cc40u: goto label_10cc40;
        default: break;
    }

    ctx->pc = 0x10cbd0u;

    // 0x10cbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cbd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cbd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10cbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10cbe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10cbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10cbe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10cbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbe8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10cbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cbf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cbf4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x10CBF4u;
    SET_GPR_U32(ctx, 31, 0x10CBFCu);
    ctx->pc = 0x10CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBF4u;
    // 0x10cbf8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x10CBF4u, 0x10CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBFCu;
label_10cbfc:
    // 0x10cbfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10cc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc04: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x10CC04u;
    SET_GPR_U32(ctx, 31, 0x10CC0Cu);
    ctx->pc = 0x10CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC04u;
    // 0x10cc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x10CC04u, 0x10CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC0Cu;
label_10cc0c:
    // 0x10cc0c: 0x922300cc  lbu         $v1, 0xCC($s1)
    ctx->pc = 0x10cc0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10cc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc14: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x10cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x10cc18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10cc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10cc20: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x10cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x10cc24: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x10cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
    // 0x10cc28: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10cc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10cc2c: 0xc62003b8  lwc1        $f0, 0x3B8($s1)
    ctx->pc = 0x10cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cc30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10cc34: 0xa22200cc  sb          $v0, 0xCC($s1)
    ctx->pc = 0x10cc34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
    // 0x10cc38: 0xc04366c  jal         func_10D9B0
    ctx->pc = 0x10CC38u;
    SET_GPR_U32(ctx, 31, 0x10CC40u);
    ctx->pc = 0x10CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC38u;
    // 0x10cc3c: 0xe6600228  swc1        $f0, 0x228($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D9B0u, 0x10CC38u, 0x10CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC40u;
label_10cc40:
    // 0x10cc40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cc40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cc44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cc48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10cc48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cc4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10cc4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cc50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cc54: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC54u;
        // 0x10cc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC5Cu;
    // 0x10cc5c: 0x0  nop
    ctx->pc = 0x10cc5cu;
    // NOP
    ctx->pc = 0x10cc60u;
}
