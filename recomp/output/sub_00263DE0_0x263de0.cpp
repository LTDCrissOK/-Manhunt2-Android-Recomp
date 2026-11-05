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

// Function: sub_00263DE0
// Address: 0x263de0 - 0x263eb8
void sub_00263DE0_0x263de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263DE0_0x263de0");
#endif

    switch (ctx->pc) {
        case 0x263df8u: goto label_263df8;
        case 0x263e18u: goto label_263e18;
        case 0x263e44u: goto label_263e44;
        case 0x263e68u: goto label_263e68;
        case 0x263e8cu: goto label_263e8c;
        default: break;
    }

    ctx->pc = 0x263de0u;

    // 0x263de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x263de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x263de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x263de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x263dec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263df0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x263DF0u;
    SET_GPR_U32(ctx, 31, 0x263DF8u);
    ctx->pc = 0x263DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DF0u;
    // 0x263df4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x263DF0u, 0x263DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DF8u;
label_263df8:
    // 0x263df8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x263df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x263dfc: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x263DFCu;
    {
        const bool branch_taken_0x263dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x263E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DFCu;
        // 0x263e00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dfc) {
            ctx->pc = 0x263EA4u;
            goto label_263ea4;
        }
    }
    ctx->pc = 0x263E04u;
    // 0x263e04: 0x8e2402a4  lw          $a0, 0x2A4($s1)
    ctx->pc = 0x263e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
    // 0x263e08: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x263E08u;
    {
        const bool branch_taken_0x263e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e08) {
            ctx->pc = 0x263E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263E08u;
            // 0x263e0c: 0x8e230234  lw          $v1, 0x234($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E20u;
            goto label_263e20;
        }
    }
    ctx->pc = 0x263E10u;
    // 0x263e10: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x263E10u;
    SET_GPR_U32(ctx, 31, 0x263E18u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x263E10u, 0x263E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E18u;
label_263e18:
    // 0x263e18: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x263e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x263e1c: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x263e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_263e20:
    // 0x263e20: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x263e20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x263e24: 0x8c620334  lw          $v0, 0x334($v1)
    ctx->pc = 0x263e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x263e28: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x263E28u;
    {
        const bool branch_taken_0x263e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E28u;
        // 0x263e2c: 0x8c4301cc  lw          $v1, 0x1CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e28) {
            ctx->pc = 0x263EA0u;
            goto label_263ea0;
        }
    }
    ctx->pc = 0x263E30u;
    // 0x263e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263e34: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263E34u;
    {
        const bool branch_taken_0x263e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E34u;
        // 0x263e38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e34) {
            ctx->pc = 0x263E58u;
            goto label_263e58;
        }
    }
    ctx->pc = 0x263E3Cu;
    // 0x263e3c: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x263E3Cu;
    SET_GPR_U32(ctx, 31, 0x263E44u);
    ctx->pc = 0x263E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E3Cu;
    // 0x263e40: 0x8e04065c  lw          $a0, 0x65C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x263E3Cu, 0x263E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E44u;
label_263e44:
    // 0x263e44: 0xae2202a4  sw          $v0, 0x2A4($s1)
    ctx->pc = 0x263e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 2));
    // 0x263e48: 0xc6000678  lwc1        $f0, 0x678($s0)
    ctx->pc = 0x263e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263e4c: 0xe62002ac  swc1        $f0, 0x2AC($s1)
    ctx->pc = 0x263e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 684), bits); }
    // 0x263e50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x263E50u;
    {
        const bool branch_taken_0x263e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E50u;
        // 0x263e54: 0xc601067c  lwc1        $f1, 0x67C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e50) {
            ctx->pc = 0x263E9Cu;
            goto label_263e9c;
        }
    }
    ctx->pc = 0x263E58u;
label_263e58:
    // 0x263e58: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263E58u;
    {
        const bool branch_taken_0x263e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E58u;
        // 0x263e5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e58) {
            ctx->pc = 0x263E7Cu;
            goto label_263e7c;
        }
    }
    ctx->pc = 0x263E60u;
    // 0x263e60: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x263E60u;
    SET_GPR_U32(ctx, 31, 0x263E68u);
    ctx->pc = 0x263E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E60u;
    // 0x263e64: 0x8e040668  lw          $a0, 0x668($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x263E60u, 0x263E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E68u;
label_263e68:
    // 0x263e68: 0xae2202a4  sw          $v0, 0x2A4($s1)
    ctx->pc = 0x263e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 2));
    // 0x263e6c: 0xc6000680  lwc1        $f0, 0x680($s0)
    ctx->pc = 0x263e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263e70: 0xe62002ac  swc1        $f0, 0x2AC($s1)
    ctx->pc = 0x263e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 684), bits); }
    // 0x263e74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x263E74u;
    {
        const bool branch_taken_0x263e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E74u;
        // 0x263e78: 0xc6010684  lwc1        $f1, 0x684($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e74) {
            ctx->pc = 0x263E9Cu;
            goto label_263e9c;
        }
    }
    ctx->pc = 0x263E7Cu;
label_263e7c:
    // 0x263e7c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263E7Cu;
    {
        const bool branch_taken_0x263e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263e7c) {
            ctx->pc = 0x263E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263E7Cu;
            // 0x263e80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263EA4u;
            goto label_263ea4;
        }
    }
    ctx->pc = 0x263E84u;
    // 0x263e84: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x263E84u;
    SET_GPR_U32(ctx, 31, 0x263E8Cu);
    ctx->pc = 0x263E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E84u;
    // 0x263e88: 0x8e040674  lw          $a0, 0x674($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x263E84u, 0x263E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E8Cu;
label_263e8c:
    // 0x263e8c: 0xae2202a4  sw          $v0, 0x2A4($s1)
    ctx->pc = 0x263e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 2));
    // 0x263e90: 0xc6000688  lwc1        $f0, 0x688($s0)
    ctx->pc = 0x263e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263e94: 0xe62002ac  swc1        $f0, 0x2AC($s1)
    ctx->pc = 0x263e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 684), bits); }
    // 0x263e98: 0xc601068c  lwc1        $f1, 0x68C($s0)
    ctx->pc = 0x263e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263e9c:
    // 0x263e9c: 0xe62102b0  swc1        $f1, 0x2B0($s1)
    ctx->pc = 0x263e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
label_263ea0:
    // 0x263ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x263ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_263ea4:
    // 0x263ea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x263ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x263ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263eac: 0x3e00008  jr          $ra
    ctx->pc = 0x263EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EACu;
        // 0x263eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263EB4u;
    // 0x263eb4: 0x0  nop
    ctx->pc = 0x263eb4u;
    // NOP
    ctx->pc = 0x263eb8u;
}
