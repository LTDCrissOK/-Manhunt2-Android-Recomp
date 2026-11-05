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

// Function: sub_00255E10
// Address: 0x255e10 - 0x255ee8
void sub_00255E10_0x255e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255E10_0x255e10");
#endif

    switch (ctx->pc) {
        case 0x255e2cu: goto label_255e2c;
        case 0x255e34u: goto label_255e34;
        case 0x255e80u: goto label_255e80;
        case 0x255ebcu: goto label_255ebc;
        case 0x255ec8u: goto label_255ec8;
        default: break;
    }

    ctx->pc = 0x255e10u;

    // 0x255e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x255e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x255e14: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x255e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x255e18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x255e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x255e1c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x255e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x255e20: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x255e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x255e24: 0xc08d78e  jal         func_235E38
    ctx->pc = 0x255E24u;
    SET_GPR_U32(ctx, 31, 0x255E2Cu);
    ctx->pc = 0x255E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E24u;
    // 0x255e28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x255E24u, 0x255E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E2Cu;
label_255e2c:
    // 0x255e2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255E2Cu;
    SET_GPR_U32(ctx, 31, 0x255E34u);
    ctx->pc = 0x255E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E2Cu;
    // 0x255e30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255E2Cu, 0x255E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E34u;
label_255e34:
    // 0x255e34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x255e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255e38: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x255e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x255e3c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x255e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x255e40: 0x24421408  addiu       $v0, $v0, 0x1408
    ctx->pc = 0x255e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5128));
    // 0x255e44: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x255e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x255e48: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x255e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x255e4c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x255e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x255e50: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x255e50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x255e54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x255e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x255e58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x255e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e5c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x255e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x255e60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x255e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e64: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x255e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x255e68: 0x26520f90  addiu       $s2, $s2, 0xF90
    ctx->pc = 0x255e68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3984));
    // 0x255e6c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x255e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x255e70: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x255e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x255e74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x255e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x255e78: 0xc06fc1a  jal         func_1BF068
    ctx->pc = 0x255E78u;
    SET_GPR_U32(ctx, 31, 0x255E80u);
    ctx->pc = 0x255E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E78u;
    // 0x255e7c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF068u, 0x255E78u, 0x255E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E80u;
label_255e80:
    // 0x255e80: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x255e80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x255e84: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x255e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x255e88: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x255e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x255e8c: 0x8e300fe8  lw          $s0, 0xFE8($s1)
    ctx->pc = 0x255e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x255e90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255e94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255e9c: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x255e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
    // 0x255ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ea4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x255ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x255ea8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x255ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x255eac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x255eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x255eb0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x255eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x255eb4: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x255EB4u;
    SET_GPR_U32(ctx, 31, 0x255EBCu);
    ctx->pc = 0x255EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255EB4u;
    // 0x255eb8: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x255EB4u, 0x255EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EBCu;
label_255ebc:
    // 0x255ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ec0: 0xc0701da  jal         func_1C0768
    ctx->pc = 0x255EC0u;
    SET_GPR_U32(ctx, 31, 0x255EC8u);
    ctx->pc = 0x255EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255EC0u;
    // 0x255ec4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x255EC0u, 0x255EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EC8u;
label_255ec8:
    // 0x255ec8: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x255ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
    // 0x255ecc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x255eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255ed0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x255ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x255ed4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x255ed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255ed8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x255ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x255edc: 0x3e00008  jr          $ra
    ctx->pc = 0x255EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EDCu;
        // 0x255ee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255EE4u;
    // 0x255ee4: 0x0  nop
    ctx->pc = 0x255ee4u;
    // NOP
    ctx->pc = 0x255ee8u;
}
