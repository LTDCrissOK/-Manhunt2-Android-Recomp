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

// Function: sub_00305E68
// Address: 0x305e68 - 0x305f80
void sub_00305E68_0x305e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305E68_0x305e68");
#endif

    switch (ctx->pc) {
        case 0x305e94u: goto label_305e94;
        case 0x305ea8u: goto label_305ea8;
        case 0x305ef4u: goto label_305ef4;
        case 0x305f1cu: goto label_305f1c;
        case 0x305f5cu: goto label_305f5c;
        case 0x305f68u: goto label_305f68;
        default: break;
    }

    ctx->pc = 0x305e68u;

    // 0x305e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x305e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x305e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x305e7c: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x305e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x305e80: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x305e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x305e84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305E84u;
    {
        const bool branch_taken_0x305e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E84u;
        // 0x305e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e84) {
            ctx->pc = 0x305E9Cu;
            goto label_305e9c;
        }
    }
    ctx->pc = 0x305E8Cu;
    // 0x305e8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x305E8Cu;
    {
        const bool branch_taken_0x305e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E8Cu;
        // 0x305e90: 0x8e2700b8  lw          $a3, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e8c) {
            ctx->pc = 0x305EC4u;
            goto label_305ec4;
        }
    }
    ctx->pc = 0x305E94u;
label_305e94:
    // 0x305e94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x305E94u;
    {
        const bool branch_taken_0x305e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E94u;
        // 0x305e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e94) {
            ctx->pc = 0x305EC4u;
            goto label_305ec4;
        }
    }
    ctx->pc = 0x305E9Cu;
label_305e9c:
    // 0x305e9c: 0x8e2700b8  lw          $a3, 0xB8($s1)
    ctx->pc = 0x305e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x305ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ea4: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x305ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_305ea8:
    // 0x305ea8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x305ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305eac: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x305EACu;
    {
        const bool branch_taken_0x305eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x305EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EACu;
        // 0x305eb0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305eac) {
            ctx->pc = 0x305E94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305e94;
        }
    }
    ctx->pc = 0x305EB4u;
    // 0x305eb4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x305eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305eb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x305EB8u;
    {
        const bool branch_taken_0x305eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EB8u;
        // 0x305ebc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305eb8) {
            ctx->pc = 0x305EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305ea8;
        }
    }
    ctx->pc = 0x305EC0u;
    // 0x305ec0: 0x8cd001e8  lw          $s0, 0x1E8($a2)
    ctx->pc = 0x305ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_305ec4:
    // 0x305ec4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x305ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305ec8: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x305ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x305ecc: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x305eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x305ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305ed4: 0x0  nop
    ctx->pc = 0x305ed4u;
    // NOP
    // 0x305ed8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x305ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305edc: 0x0  nop
    ctx->pc = 0x305edcu;
    // NOP
    // 0x305ee0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x305EE0u;
    {
        const bool branch_taken_0x305ee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EE0u;
        // 0x305ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ee0) {
            ctx->pc = 0x305EFCu;
            goto label_305efc;
        }
    }
    ctx->pc = 0x305EE8u;
    // 0x305ee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x305ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305eec: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x305EECu;
    SET_GPR_U32(ctx, 31, 0x305EF4u);
    ctx->pc = 0x305EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EECu;
    // 0x305ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x305EECu, 0x305EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EF4u;
label_305ef4:
    // 0x305ef4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x305EF4u;
    {
        const bool branch_taken_0x305ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EF4u;
        // 0x305ef8: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ef4) {
            ctx->pc = 0x305F20u;
            goto label_305f20;
        }
    }
    ctx->pc = 0x305EFCu;
label_305efc:
    // 0x305efc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x305efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x305f00: 0xc4e01510  lwc1        $f0, 0x1510($a3)
    ctx->pc = 0x305f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 5392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305f04: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x305f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x305f08: 0x0  nop
    ctx->pc = 0x305f08u;
    // NOP
    // 0x305f0c: 0x0  nop
    ctx->pc = 0x305f0cu;
    // NOP
    // 0x305f10: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x305f10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x305f14: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x305F14u;
    SET_GPR_U32(ctx, 31, 0x305F1Cu);
    ctx->pc = 0x305F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F14u;
    // 0x305f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x305F14u, 0x305F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F1Cu;
label_305f1c:
    // 0x305f1c: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x305f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_305f20:
    // 0x305f20: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x305f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x305f24: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x305f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x305f28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x305f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x305f2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x305F2Cu;
    {
        const bool branch_taken_0x305f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F2Cu;
        // 0x305f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f2c) {
            ctx->pc = 0x305F60u;
            goto label_305f60;
        }
    }
    ctx->pc = 0x305F34u;
    // 0x305f34: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x305f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x305f38: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x305f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x305f3c: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x305f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x305f40: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x305f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305f44: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x305f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305f48: 0x0  nop
    ctx->pc = 0x305f48u;
    // NOP
    // 0x305f4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x305F4Cu;
    {
        const bool branch_taken_0x305f4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x305f4c) {
            ctx->pc = 0x305F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305F4Cu;
            // 0x305f50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x305F54u;
            goto label_305f54;
        }
    }
    ctx->pc = 0x305F54u;
label_305f54:
    // 0x305f54: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x305F54u;
    SET_GPR_U32(ctx, 31, 0x305F5Cu);
    ctx->pc = 0x305F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F54u;
    // 0x305f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x305F54u, 0x305F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F5Cu;
label_305f5c:
    // 0x305f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305f60:
    // 0x305f60: 0xc08a15a  jal         func_228568
    ctx->pc = 0x305F60u;
    SET_GPR_U32(ctx, 31, 0x305F68u);
    ctx->pc = 0x305F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F60u;
    // 0x305f64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x305F60u, 0x305F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F68u;
label_305f68:
    // 0x305f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x305f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305f74: 0x3e00008  jr          $ra
    ctx->pc = 0x305F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F74u;
        // 0x305f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305F7Cu;
    // 0x305f7c: 0x0  nop
    ctx->pc = 0x305f7cu;
    // NOP
    ctx->pc = 0x305f80u;
}
