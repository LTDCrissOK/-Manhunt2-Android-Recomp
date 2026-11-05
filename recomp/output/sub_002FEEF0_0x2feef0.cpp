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

// Function: sub_002FEEF0
// Address: 0x2feef0 - 0x2ff140
void sub_002FEEF0_0x2feef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEEF0_0x2feef0");
#endif

    switch (ctx->pc) {
        case 0x2fef48u: goto label_2fef48;
        case 0x2fef6cu: goto label_2fef6c;
        case 0x2fef80u: goto label_2fef80;
        case 0x2fefa8u: goto label_2fefa8;
        case 0x2fefc0u: goto label_2fefc0;
        case 0x2fefecu: goto label_2fefec;
        case 0x2ff020u: goto label_2ff020;
        case 0x2ff044u: goto label_2ff044;
        case 0x2ff058u: goto label_2ff058;
        case 0x2ff080u: goto label_2ff080;
        case 0x2ff098u: goto label_2ff098;
        case 0x2ff0c4u: goto label_2ff0c4;
        case 0x2ff0f8u: goto label_2ff0f8;
        case 0x2ff108u: goto label_2ff108;
        case 0x2ff120u: goto label_2ff120;
        default: break;
    }

    ctx->pc = 0x2feef0u;

    // 0x2feef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2feef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2feef4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2feef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2feef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2feef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2feefc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2feefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fef00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fef00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef04: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2fef04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fef08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fef08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef0c: 0x9043b820  lbu         $v1, -0x47E0($v0)
    ctx->pc = 0x2fef0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB820u));
    // 0x2fef10: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2fef10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2fef14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fef18: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEF18u;
    {
        const bool branch_taken_0x2fef18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF18u;
        // 0x2fef1c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef18) {
            ctx->pc = 0x2FEF2Cu;
            goto label_2fef2c;
        }
    }
    ctx->pc = 0x2FEF20u;
    // 0x2fef20: 0x8e2211f8  lw          $v0, 0x11F8($s1)
    ctx->pc = 0x2fef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4600)));
    // 0x2fef24: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2FEF24u;
    {
        const bool branch_taken_0x2fef24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF24u;
        // 0x2fef28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef24) {
            ctx->pc = 0x2FF124u;
            goto label_2ff124;
        }
    }
    ctx->pc = 0x2FEF2Cu;
label_2fef2c:
    // 0x2fef2c: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FEF2Cu;
    {
        const bool branch_taken_0x2fef2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF2Cu;
        // 0x2fef30: 0x8e260334  lw          $a2, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef2c) {
            ctx->pc = 0x2FEFB0u;
            goto label_2fefb0;
        }
    }
    ctx->pc = 0x2FEF34u;
    // 0x2fef34: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x2fef38: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FEF38u;
    {
        const bool branch_taken_0x2fef38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF38u;
        // 0x2fef3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef38) {
            ctx->pc = 0x2FEF64u;
            goto label_2fef64;
        }
    }
    ctx->pc = 0x2FEF40u;
    // 0x2fef40: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2fef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x2fef44: 0x0  nop
    ctx->pc = 0x2fef44u;
    // NOP
label_2fef48:
    // 0x2fef48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fef4c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEF4Cu;
    {
        const bool branch_taken_0x2fef4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF4Cu;
        // 0x2fef50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef4c) {
            ctx->pc = 0x2FEF64u;
            goto label_2fef64;
        }
    }
    ctx->pc = 0x2FEF54u;
    // 0x2fef54: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fef54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fef58: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FEF58u;
    {
        const bool branch_taken_0x2fef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF58u;
        // 0x2fef5c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef58) {
            ctx->pc = 0x2FEF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fef48;
        }
    }
    ctx->pc = 0x2FEF60u;
    // 0x2fef60: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fef60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fef64:
    // 0x2fef64: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2FEF64u;
    SET_GPR_U32(ctx, 31, 0x2FEF6Cu);
    ctx->pc = 0x2FEF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF64u;
    // 0x2fef68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FEF64u, 0x2FEF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF6Cu;
label_2fef6c:
    // 0x2fef6c: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x2fef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2fef70: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x2fef74: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEF74u;
    {
        const bool branch_taken_0x2fef74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF74u;
        // 0x2fef78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef74) {
            ctx->pc = 0x2FEF9Cu;
            goto label_2fef9c;
        }
    }
    ctx->pc = 0x2FEF7Cu;
    // 0x2fef7c: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2fef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2fef80:
    // 0x2fef80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fef84: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEF84u;
    {
        const bool branch_taken_0x2fef84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF84u;
        // 0x2fef88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef84) {
            ctx->pc = 0x2FEF9Cu;
            goto label_2fef9c;
        }
    }
    ctx->pc = 0x2FEF8Cu;
    // 0x2fef8c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fef8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fef90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FEF90u;
    {
        const bool branch_taken_0x2fef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF90u;
        // 0x2fef94: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef90) {
            ctx->pc = 0x2FEF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fef80;
        }
    }
    ctx->pc = 0x2FEF98u;
    // 0x2fef98: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fef9c:
    // 0x2fef9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fef9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fefa0: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2FEFA0u;
    SET_GPR_U32(ctx, 31, 0x2FEFA8u);
    ctx->pc = 0x2FEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFA0u;
    // 0x2fefa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2FEFA0u, 0x2FEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFA8u;
label_2fefa8:
    // 0x2fefa8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FEFA8u;
    {
        const bool branch_taken_0x2fefa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFA8u;
        // 0x2fefac: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fefa8) {
            ctx->pc = 0x2FEFF0u;
            goto label_2feff0;
        }
    }
    ctx->pc = 0x2FEFB0u;
label_2fefb0:
    // 0x2fefb0: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fefb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x2fefb4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEFB4u;
    {
        const bool branch_taken_0x2fefb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFB4u;
        // 0x2fefb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fefb4) {
            ctx->pc = 0x2FEFDCu;
            goto label_2fefdc;
        }
    }
    ctx->pc = 0x2FEFBCu;
    // 0x2fefbc: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2fefbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2fefc0:
    // 0x2fefc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fefc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fefc4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEFC4u;
    {
        const bool branch_taken_0x2fefc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFC4u;
        // 0x2fefc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fefc4) {
            ctx->pc = 0x2FEFDCu;
            goto label_2fefdc;
        }
    }
    ctx->pc = 0x2FEFCCu;
    // 0x2fefcc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fefccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fefd0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FEFD0u;
    {
        const bool branch_taken_0x2fefd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFD0u;
        // 0x2fefd4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fefd0) {
            ctx->pc = 0x2FEFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fefc0;
        }
    }
    ctx->pc = 0x2FEFD8u;
    // 0x2fefd8: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fefdc:
    // 0x2fefdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fefdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fefe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fefe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fefe4: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2FEFE4u;
    SET_GPR_U32(ctx, 31, 0x2FEFECu);
    ctx->pc = 0x2FEFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFE4u;
    // 0x2fefe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2FEFE4u, 0x2FEFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFECu;
label_2fefec:
    // 0x2fefec: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2fefecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2feff0:
    // 0x2feff0: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FEFF0u;
    {
        const bool branch_taken_0x2feff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feff0) {
            ctx->pc = 0x2FEFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEFF0u;
            // 0x2feff4: 0x8e24136c  lw          $a0, 0x136C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4972)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0C8u;
            goto label_2ff0c8;
        }
    }
    ctx->pc = 0x2FEFF8u;
    // 0x2feff8: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FEFF8u;
    {
        const bool branch_taken_0x2feff8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFF8u;
        // 0x2feffc: 0x8c500334  lw          $s0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feff8) {
            ctx->pc = 0x2FF088u;
            goto label_2ff088;
        }
    }
    ctx->pc = 0x2FF000u;
    // 0x2ff000: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2ff000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2ff004: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ff004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ff008: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FF008u;
    {
        const bool branch_taken_0x2ff008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF008u;
        // 0x2ff00c: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff008) {
            ctx->pc = 0x2FF08Cu;
            goto label_2ff08c;
        }
    }
    ctx->pc = 0x2FF010u;
    // 0x2ff010: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FF010u;
    {
        const bool branch_taken_0x2ff010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF010u;
        // 0x2ff014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff010) {
            ctx->pc = 0x2FF03Cu;
            goto label_2ff03c;
        }
    }
    ctx->pc = 0x2FF018u;
    // 0x2ff018: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x2ff018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x2ff01c: 0x0  nop
    ctx->pc = 0x2ff01cu;
    // NOP
label_2ff020:
    // 0x2ff020: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ff020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff024: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF024u;
    {
        const bool branch_taken_0x2ff024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF024u;
        // 0x2ff028: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff024) {
            ctx->pc = 0x2FF03Cu;
            goto label_2ff03c;
        }
    }
    ctx->pc = 0x2FF02Cu;
    // 0x2ff02c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2ff02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ff030: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FF030u;
    {
        const bool branch_taken_0x2ff030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF030u;
        // 0x2ff034: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff030) {
            ctx->pc = 0x2FF020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff020;
        }
    }
    ctx->pc = 0x2FF038u;
    // 0x2ff038: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x2ff038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_2ff03c:
    // 0x2ff03c: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2FF03Cu;
    SET_GPR_U32(ctx, 31, 0x2FF044u);
    ctx->pc = 0x2FF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF03Cu;
    // 0x2ff040: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FF03Cu, 0x2FF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF044u;
label_2ff044:
    // 0x2ff044: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x2ff044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2ff048: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FF048u;
    {
        const bool branch_taken_0x2ff048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF048u;
        // 0x2ff04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff048) {
            ctx->pc = 0x2FF074u;
            goto label_2ff074;
        }
    }
    ctx->pc = 0x2FF050u;
    // 0x2ff050: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x2ff050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x2ff054: 0x0  nop
    ctx->pc = 0x2ff054u;
    // NOP
label_2ff058:
    // 0x2ff058: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ff058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff05c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF05Cu;
    {
        const bool branch_taken_0x2ff05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF05Cu;
        // 0x2ff060: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff05c) {
            ctx->pc = 0x2FF074u;
            goto label_2ff074;
        }
    }
    ctx->pc = 0x2FF064u;
    // 0x2ff064: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2ff064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ff068: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FF068u;
    {
        const bool branch_taken_0x2ff068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF068u;
        // 0x2ff06c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff068) {
            ctx->pc = 0x2FF058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff058;
        }
    }
    ctx->pc = 0x2FF070u;
    // 0x2ff070: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x2ff070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_2ff074:
    // 0x2ff074: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff078: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2FF078u;
    SET_GPR_U32(ctx, 31, 0x2FF080u);
    ctx->pc = 0x2FF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF078u;
    // 0x2ff07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2FF078u, 0x2FF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF080u;
label_2ff080:
    // 0x2ff080: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FF080u;
    {
        const bool branch_taken_0x2ff080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF080u;
        // 0x2ff084: 0x8e24136c  lw          $a0, 0x136C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff080) {
            ctx->pc = 0x2FF0C8u;
            goto label_2ff0c8;
        }
    }
    ctx->pc = 0x2FF088u;
label_2ff088:
    // 0x2ff088: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x2ff088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_2ff08c:
    // 0x2ff08c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FF08Cu;
    {
        const bool branch_taken_0x2ff08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF08Cu;
        // 0x2ff090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff08c) {
            ctx->pc = 0x2FF0B4u;
            goto label_2ff0b4;
        }
    }
    ctx->pc = 0x2FF094u;
    // 0x2ff094: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x2ff094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_2ff098:
    // 0x2ff098: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ff098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff09c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF09Cu;
    {
        const bool branch_taken_0x2ff09c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF09Cu;
        // 0x2ff0a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff09c) {
            ctx->pc = 0x2FF0B4u;
            goto label_2ff0b4;
        }
    }
    ctx->pc = 0x2FF0A4u;
    // 0x2ff0a4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2ff0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ff0a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FF0A8u;
    {
        const bool branch_taken_0x2ff0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0A8u;
        // 0x2ff0ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0a8) {
            ctx->pc = 0x2FF098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff098;
        }
    }
    ctx->pc = 0x2FF0B0u;
    // 0x2ff0b0: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x2ff0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_2ff0b4:
    // 0x2ff0b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ff0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff0b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff0bc: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2FF0BCu;
    SET_GPR_U32(ctx, 31, 0x2FF0C4u);
    ctx->pc = 0x2FF0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF0BCu;
    // 0x2ff0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2FF0BCu, 0x2FF0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF0C4u;
label_2ff0c4:
    // 0x2ff0c4: 0x8e24136c  lw          $a0, 0x136C($s1)
    ctx->pc = 0x2ff0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4972)));
label_2ff0c8:
    // 0x2ff0c8: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FF0C8u;
    {
        const bool branch_taken_0x2ff0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0C8u;
        // 0x2ff0cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0c8) {
            ctx->pc = 0x2FF124u;
            goto label_2ff124;
        }
    }
    ctx->pc = 0x2FF0D0u;
    // 0x2ff0d0: 0x8c9002c8  lw          $s0, 0x2C8($a0)
    ctx->pc = 0x2ff0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 712)));
    // 0x2ff0d4: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FF0D4u;
    {
        const bool branch_taken_0x2ff0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0d4) {
            ctx->pc = 0x2FF0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0D4u;
            // 0x2ff0d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF124u;
            goto label_2ff124;
        }
    }
    ctx->pc = 0x2FF0DCu;
    // 0x2ff0dc: 0x8e040194  lw          $a0, 0x194($s0)
    ctx->pc = 0x2ff0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x2ff0e0: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FF0E0u;
    {
        const bool branch_taken_0x2ff0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0e0) {
            ctx->pc = 0x2FF0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0E0u;
            // 0x2ff0e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF124u;
            goto label_2ff124;
        }
    }
    ctx->pc = 0x2FF0E8u;
    // 0x2ff0e8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FF0E8u;
    {
        const bool branch_taken_0x2ff0e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0e8) {
            ctx->pc = 0x2FF110u;
            goto label_2ff110;
        }
    }
    ctx->pc = 0x2FF0F0u;
    // 0x2ff0f0: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2FF0F0u;
    SET_GPR_U32(ctx, 31, 0x2FF0F8u);
    ctx->pc = 0x2FF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF0F0u;
    // 0x2ff0f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FF0F0u, 0x2FF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF0F8u;
label_2ff0f8:
    // 0x2ff0f8: 0x8e040194  lw          $a0, 0x194($s0)
    ctx->pc = 0x2ff0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x2ff0fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff100: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2FF100u;
    SET_GPR_U32(ctx, 31, 0x2FF108u);
    ctx->pc = 0x2FF104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF100u;
    // 0x2ff104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2FF100u, 0x2FF108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF108u;
label_2ff108:
    // 0x2ff108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF108u;
    {
        const bool branch_taken_0x2ff108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF108u;
        // 0x2ff10c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff108) {
            ctx->pc = 0x2FF124u;
            goto label_2ff124;
        }
    }
    ctx->pc = 0x2FF110u;
label_2ff110:
    // 0x2ff110: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ff110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff114: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff118: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2FF118u;
    SET_GPR_U32(ctx, 31, 0x2FF120u);
    ctx->pc = 0x2FF11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF118u;
    // 0x2ff11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2FF118u, 0x2FF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF120u;
label_2ff120:
    // 0x2ff120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff124:
    // 0x2ff124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ff124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ff128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff12c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ff12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ff130: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2ff130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ff134: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF134u;
        // 0x2ff138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF13Cu;
    // 0x2ff13c: 0x0  nop
    ctx->pc = 0x2ff13cu;
    // NOP
    ctx->pc = 0x2ff140u;
}
