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

// Function: sub_0037A0E0
// Address: 0x37a0e0 - 0x37a1d8
void sub_0037A0E0_0x37a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A0E0_0x37a0e0");
#endif

    switch (ctx->pc) {
        case 0x37a108u: goto label_37a108;
        case 0x37a130u: goto label_37a130;
        case 0x37a158u: goto label_37a158;
        case 0x37a16cu: goto label_37a16c;
        case 0x37a17cu: goto label_37a17c;
        case 0x37a198u: goto label_37a198;
        case 0x37a1b8u: goto label_37a1b8;
        default: break;
    }

    ctx->pc = 0x37a0e0u;

    // 0x37a0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37a0e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a0e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x37a0ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37a0f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37a0f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37a0fc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x37a0fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x37a100: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37a100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37a104: 0x0  nop
    ctx->pc = 0x37a104u;
    // NOP
label_37a108:
    // 0x37a108: 0x0  nop
    ctx->pc = 0x37a108u;
    // NOP
    // 0x37a10c: 0x0  nop
    ctx->pc = 0x37a10cu;
    // NOP
    // 0x37a110: 0x0  nop
    ctx->pc = 0x37a110u;
    // NOP
    // 0x37a114: 0x0  nop
    ctx->pc = 0x37a114u;
    // NOP
    // 0x37a118: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37A118u;
    {
        const bool branch_taken_0x37a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A118u;
        // 0x37a11c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a118) {
            ctx->pc = 0x37A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a108;
        }
    }
    ctx->pc = 0x37A120u;
    // 0x37a120: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37a120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a124: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37a124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37a128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37a12c: 0x0  nop
    ctx->pc = 0x37a12cu;
    // NOP
label_37a130:
    // 0x37a130: 0x0  nop
    ctx->pc = 0x37a130u;
    // NOP
    // 0x37a134: 0x0  nop
    ctx->pc = 0x37a134u;
    // NOP
    // 0x37a138: 0x0  nop
    ctx->pc = 0x37a138u;
    // NOP
    // 0x37a13c: 0x0  nop
    ctx->pc = 0x37a13cu;
    // NOP
    // 0x37a140: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37A140u;
    {
        const bool branch_taken_0x37a140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A140u;
        // 0x37a144: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a140) {
            ctx->pc = 0x37A130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a130;
        }
    }
    ctx->pc = 0x37A148u;
    // 0x37a148: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x37a148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x37a14c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a150: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x37a150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x37a154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37a158:
    // 0x37a158: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37a158u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x37a15c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x37a15cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37a160: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x37a160u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x37a164: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x37A164u;
    SET_GPR_U32(ctx, 31, 0x37A16Cu);
    ctx->pc = 0x37A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A164u;
    // 0x37a168: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x37A164u, 0x37A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A16Cu;
label_37a16c:
    // 0x37a16c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37a16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a170: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x37a170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a174: 0xc0de880  jal         func_37A200
    ctx->pc = 0x37A174u;
    SET_GPR_U32(ctx, 31, 0x37A17Cu);
    ctx->pc = 0x37A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A174u;
    // 0x37a178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A200u, 0x37A174u, 0x37A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A17Cu;
label_37a17c:
    // 0x37a17c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37a17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37a188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a18c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37a18cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a190: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x37A190u;
    SET_GPR_U32(ctx, 31, 0x37A198u);
    ctx->pc = 0x37A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A190u;
    // 0x37a194: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x37A190u, 0x37A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A198u;
label_37a198:
    // 0x37a198: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x37a198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37a19c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x37A19Cu;
    {
        const bool branch_taken_0x37a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A19Cu;
        // 0x37a1a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a19c) {
            ctx->pc = 0x37A158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a158;
        }
    }
    ctx->pc = 0x37A1A4u;
    // 0x37a1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37a1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1b0: 0xc0de8c2  jal         func_37A308
    ctx->pc = 0x37A1B0u;
    SET_GPR_U32(ctx, 31, 0x37A1B8u);
    ctx->pc = 0x37A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1B0u;
    // 0x37a1b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A308u, 0x37A1B0u, 0x37A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1B8u;
label_37a1b8:
    // 0x37a1b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37a1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37a1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a1c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x37a1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37a1c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37a1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a1c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x37a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37a1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37A1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1CCu;
        // 0x37a1d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A1D4u;
    // 0x37a1d4: 0x0  nop
    ctx->pc = 0x37a1d4u;
    // NOP
    ctx->pc = 0x37a1d8u;
}
