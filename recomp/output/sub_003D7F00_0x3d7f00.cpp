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

// Function: sub_003D7F00
// Address: 0x3d7f00 - 0x3d7fb0
void sub_003D7F00_0x3d7f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7F00_0x3d7f00");
#endif

    switch (ctx->pc) {
        case 0x3d7f00u: goto label_3d7f00;
        case 0x3d7f04u: goto label_3d7f04;
        case 0x3d7f08u: goto label_3d7f08;
        case 0x3d7f0cu: goto label_3d7f0c;
        case 0x3d7f10u: goto label_3d7f10;
        case 0x3d7f14u: goto label_3d7f14;
        case 0x3d7f18u: goto label_3d7f18;
        case 0x3d7f1cu: goto label_3d7f1c;
        case 0x3d7f20u: goto label_3d7f20;
        case 0x3d7f24u: goto label_3d7f24;
        case 0x3d7f28u: goto label_3d7f28;
        case 0x3d7f2cu: goto label_3d7f2c;
        case 0x3d7f30u: goto label_3d7f30;
        case 0x3d7f34u: goto label_3d7f34;
        case 0x3d7f38u: goto label_3d7f38;
        case 0x3d7f3cu: goto label_3d7f3c;
        case 0x3d7f40u: goto label_3d7f40;
        case 0x3d7f44u: goto label_3d7f44;
        case 0x3d7f48u: goto label_3d7f48;
        case 0x3d7f4cu: goto label_3d7f4c;
        case 0x3d7f50u: goto label_3d7f50;
        case 0x3d7f54u: goto label_3d7f54;
        case 0x3d7f58u: goto label_3d7f58;
        case 0x3d7f5cu: goto label_3d7f5c;
        case 0x3d7f60u: goto label_3d7f60;
        case 0x3d7f64u: goto label_3d7f64;
        case 0x3d7f68u: goto label_3d7f68;
        case 0x3d7f6cu: goto label_3d7f6c;
        case 0x3d7f70u: goto label_3d7f70;
        case 0x3d7f74u: goto label_3d7f74;
        case 0x3d7f78u: goto label_3d7f78;
        case 0x3d7f7cu: goto label_3d7f7c;
        case 0x3d7f80u: goto label_3d7f80;
        case 0x3d7f84u: goto label_3d7f84;
        case 0x3d7f88u: goto label_3d7f88;
        case 0x3d7f8cu: goto label_3d7f8c;
        case 0x3d7f90u: goto label_3d7f90;
        case 0x3d7f94u: goto label_3d7f94;
        case 0x3d7f98u: goto label_3d7f98;
        case 0x3d7f9cu: goto label_3d7f9c;
        case 0x3d7fa0u: goto label_3d7fa0;
        case 0x3d7fa4u: goto label_3d7fa4;
        case 0x3d7fa8u: goto label_3d7fa8;
        case 0x3d7facu: goto label_3d7fac;
        default: break;
    }

    ctx->pc = 0x3d7f00u;

label_3d7f00:
    // 0x3d7f00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3d7f04:
    // 0x3d7f04: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x3d7f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_3d7f08:
    // 0x3d7f08: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3d7f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_3d7f0c:
    // 0x3d7f0c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3d7f0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f10:
    // 0x3d7f10: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3d7f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3d7f14:
    // 0x3d7f14: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3d7f14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f18:
    // 0x3d7f18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d7f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3d7f1c:
    // 0x3d7f1c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3d7f1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f20:
    // 0x3d7f20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d7f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3d7f24:
    // 0x3d7f24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d7f24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f28:
    // 0x3d7f28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d7f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3d7f2c:
    // 0x3d7f2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d7f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3d7f30:
    // 0x3d7f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d7f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d7f34:
    // 0x3d7f34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d7f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3d7f38:
    // 0x3d7f38: 0x80f809  jalr        $a0
label_3d7f3c:
    if (ctx->pc == 0x3D7F3Cu) {
        ctx->pc = 0x3D7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F38u;
        // 0x3d7f3c: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F40u;
        goto label_3d7f40;
    }
    ctx->pc = 0x3D7F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x3D7F40u);
        ctx->pc = 0x3D7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F38u;
        // 0x3d7f3c: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7F38u, 0x3D7F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7F40u;
label_3d7f40:
    // 0x3d7f40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d7f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f44:
    // 0x3d7f44: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3d7f44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d7f48:
    // 0x3d7f48: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x3d7f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_3d7f4c:
    // 0x3d7f4c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3d7f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d7f50:
    // 0x3d7f50: 0x280f809  jalr        $s4
label_3d7f54:
    if (ctx->pc == 0x3D7F54u) {
        ctx->pc = 0x3D7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F50u;
        // 0x3d7f54: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F58u;
        goto label_3d7f58;
    }
    ctx->pc = 0x3D7F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3D7F58u);
        ctx->pc = 0x3D7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F50u;
        // 0x3d7f54: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7F50u, 0x3D7F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7F58u;
label_3d7f58:
    // 0x3d7f58: 0x260f809  jalr        $s3
label_3d7f5c:
    if (ctx->pc == 0x3D7F5Cu) {
        ctx->pc = 0x3D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F58u;
        // 0x3d7f5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F60u;
        goto label_3d7f60;
    }
    ctx->pc = 0x3D7F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x3D7F60u);
        ctx->pc = 0x3D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F58u;
        // 0x3d7f5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7F58u, 0x3D7F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7F60u;
label_3d7f60:
    // 0x3d7f60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d7f64:
    // 0x3d7f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f68:
    // 0x3d7f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d7f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f6c:
    // 0x3d7f6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d7f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f70:
    // 0x3d7f70: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3d7f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f74:
    // 0x3d7f74: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x3d7f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f78:
    // 0x3d7f78: 0x60f809  jalr        $v1
label_3d7f7c:
    if (ctx->pc == 0x3D7F7Cu) {
        ctx->pc = 0x3D7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F78u;
        // 0x3d7f7c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F80u;
        goto label_3d7f80;
    }
    ctx->pc = 0x3D7F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7F80u);
        ctx->pc = 0x3D7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F78u;
        // 0x3d7f7c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7F78u, 0x3D7F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7F80u;
label_3d7f80:
    // 0x3d7f80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d7f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d7f84:
    // 0x3d7f84: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x3d7f84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d7f88:
    // 0x3d7f88: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3d7f88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7f8c:
    // 0x3d7f8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3d7f8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7f90:
    // 0x3d7f90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d7f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7f94:
    // 0x3d7f94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d7f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7f98:
    // 0x3d7f98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d7f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7f9c:
    // 0x3d7f9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d7f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7fa0:
    // 0x3d7fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d7fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7fa4:
    // 0x3d7fa4: 0x3e00008  jr          $ra
label_3d7fa8:
    if (ctx->pc == 0x3D7FA8u) {
        ctx->pc = 0x3D7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FA4u;
        // 0x3d7fa8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7FACu;
        goto label_3d7fac;
    }
    ctx->pc = 0x3D7FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FA4u;
        // 0x3d7fa8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7FACu;
label_3d7fac:
    // 0x3d7fac: 0x0  nop
    ctx->pc = 0x3d7facu;
    // NOP
    ctx->pc = 0x3d7fb0u;
}
