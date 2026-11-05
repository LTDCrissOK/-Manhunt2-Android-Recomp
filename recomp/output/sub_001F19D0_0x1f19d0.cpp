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

// Function: sub_001F19D0
// Address: 0x1f19d0 - 0x1f1b30
void sub_001F19D0_0x1f19d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F19D0_0x1f19d0");
#endif

    switch (ctx->pc) {
        case 0x1f1aa4u: goto label_1f1aa4;
        case 0x1f1ab4u: goto label_1f1ab4;
        case 0x1f1ac4u: goto label_1f1ac4;
        case 0x1f1ad4u: goto label_1f1ad4;
        case 0x1f1ae4u: goto label_1f1ae4;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1b04u: goto label_1f1b04;
        case 0x1f1b14u: goto label_1f1b14;
        case 0x1f1b24u: goto label_1f1b24;
        default: break;
    }

    ctx->pc = 0x1f19d0u;

    // 0x1f19d0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f19d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f19d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f19d8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1f19d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f19dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f19dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f19e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1f19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f19e4: 0x8c474f94  lw          $a3, 0x4F94($v0)
    ctx->pc = 0x1f19e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f19e8: 0x10e0004e  beqz        $a3, . + 4 + (0x4E << 2)
    ctx->pc = 0x1F19E8u;
    {
        const bool branch_taken_0x1f19e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19E8u;
        // 0x1f19ec: 0x24033001  addiu       $v1, $zero, 0x3001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19e8) {
            ctx->pc = 0x1F1B24u;
            goto label_1f1b24;
        }
    }
    ctx->pc = 0x1F19F0u;
    // 0x1f19f0: 0x8ce200b8  lw          $v0, 0xB8($a3)
    ctx->pc = 0x1f19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x1f19f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f19f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f19f8: 0x10c30034  beq         $a2, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F19F8u;
    {
        const bool branch_taken_0x1f19f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19F8u;
        // 0x1f19fc: 0x2cc23002  sltiu       $v0, $a2, 0x3002 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)12290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19f8) {
            ctx->pc = 0x1F1ACCu;
            goto label_1f1acc;
        }
    }
    ctx->pc = 0x1F1A00u;
    // 0x1f1a00: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1A00u;
    {
        const bool branch_taken_0x1f1a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A00u;
        // 0x1f1a04: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a00) {
            ctx->pc = 0x1F1A44u;
            goto label_1f1a44;
        }
    }
    ctx->pc = 0x1F1A08u;
    // 0x1f1a08: 0x10c20028  beq         $a2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F1A08u;
    {
        const bool branch_taken_0x1f1a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A08u;
        // 0x1f1a0c: 0x2cc20040  sltiu       $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a08) {
            ctx->pc = 0x1F1AACu;
            goto label_1f1aac;
        }
    }
    ctx->pc = 0x1F1A10u;
    // 0x1f1a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1A10u;
    {
        const bool branch_taken_0x1f1a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A10u;
        // 0x1f1a14: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a10) {
            ctx->pc = 0x1F1A28u;
            goto label_1f1a28;
        }
    }
    ctx->pc = 0x1F1A18u;
    // 0x1f1a18: 0x10c20020  beq         $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F1A18u;
    {
        const bool branch_taken_0x1f1a18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A18u;
        // 0x1f1a1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a18) {
            ctx->pc = 0x1F1A9Cu;
            goto label_1f1a9c;
        }
    }
    ctx->pc = 0x1F1A20u;
    // 0x1f1a20: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1F1A20u;
    {
        const bool branch_taken_0x1f1a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a20) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1A28u;
label_1f1a28:
    // 0x1f1a28: 0x24020181  addiu       $v0, $zero, 0x181
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x1f1a2c: 0x10c20037  beq         $a2, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F1A2Cu;
    {
        const bool branch_taken_0x1f1a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A2Cu;
        // 0x1f1a30: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a2c) {
            ctx->pc = 0x1F1B0Cu;
            goto label_1f1b0c;
        }
    }
    ctx->pc = 0x1F1A34u;
    // 0x1f1a34: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F1A34u;
    {
        const bool branch_taken_0x1f1a34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A34u;
        // 0x1f1a38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a34) {
            ctx->pc = 0x1F1ABCu;
            goto label_1f1abc;
        }
    }
    ctx->pc = 0x1F1A3Cu;
    // 0x1f1a3c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1F1A3Cu;
    {
        const bool branch_taken_0x1f1a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a3c) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1A44u;
label_1f1a44:
    // 0x1f1a44: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x1f1a48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f1a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f1a4c: 0x10c20035  beq         $a2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F1A4Cu;
    {
        const bool branch_taken_0x1f1a4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A4Cu;
        // 0x1f1a50: 0x46102b  sltu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a4c) {
            ctx->pc = 0x1F1B24u;
            goto label_1f1b24;
        }
    }
    ctx->pc = 0x1F1A54u;
    // 0x1f1a54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1A54u;
    {
        const bool branch_taken_0x1f1a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A54u;
        // 0x1f1a58: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a54) {
            ctx->pc = 0x1F1A7Cu;
            goto label_1f1a7c;
        }
    }
    ctx->pc = 0x1F1A5Cu;
    // 0x1f1a5c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1f1a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1f1a60: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F1A60u;
    {
        const bool branch_taken_0x1f1a60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A60u;
        // 0x1f1a64: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a60) {
            ctx->pc = 0x1F1ADCu;
            goto label_1f1adc;
        }
    }
    ctx->pc = 0x1F1A68u;
    // 0x1f1a68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f1a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f1a6c: 0x10c2001f  beq         $a2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F1A6Cu;
    {
        const bool branch_taken_0x1f1a6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A6Cu;
        // 0x1f1a70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a6c) {
            ctx->pc = 0x1F1AECu;
            goto label_1f1aec;
        }
    }
    ctx->pc = 0x1F1A74u;
    // 0x1f1a74: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F1A74u;
    {
        const bool branch_taken_0x1f1a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a74) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1A7Cu;
label_1f1a7c:
    // 0x1f1a7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f1a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f1a80: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F1A80u;
    {
        const bool branch_taken_0x1f1a80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A80u;
        // 0x1f1a84: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a80) {
            ctx->pc = 0x1F1AFCu;
            goto label_1f1afc;
        }
    }
    ctx->pc = 0x1F1A88u;
    // 0x1f1a88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f1a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f1a8c: 0x10c20023  beq         $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1A8Cu;
    {
        const bool branch_taken_0x1f1a8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A8Cu;
        // 0x1f1a90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a8c) {
            ctx->pc = 0x1F1B1Cu;
            goto label_1f1b1c;
        }
    }
    ctx->pc = 0x1F1A94u;
    // 0x1f1a94: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F1A94u;
    {
        const bool branch_taken_0x1f1a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a94) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1A9Cu;
label_1f1a9c:
    // 0x1f1a9c: 0xc07c6cc  jal         func_1F1B30
    ctx->pc = 0x1F1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1AA4u);
    ctx->pc = 0x1F1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1B30u, 0x1F1A9Cu, 0x1F1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AA4u;
label_1f1aa4:
    // 0x1f1aa4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F1AA4u;
    {
        const bool branch_taken_0x1f1aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AA4u;
        // 0x1f1aa8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1aa4) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1AACu;
label_1f1aac:
    // 0x1f1aac: 0xc07ca4a  jal         func_1F2928
    ctx->pc = 0x1F1AACu;
    SET_GPR_U32(ctx, 31, 0x1F1AB4u);
    ctx->pc = 0x1F2928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2928u, 0x1F1AACu, 0x1F1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AB4u;
label_1f1ab4:
    // 0x1f1ab4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1F1AB4u;
    {
        const bool branch_taken_0x1f1ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AB4u;
        // 0x1f1ab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ab4) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1ABCu;
label_1f1abc:
    // 0x1f1abc: 0xc07ce90  jal         func_1F3A40
    ctx->pc = 0x1F1ABCu;
    SET_GPR_U32(ctx, 31, 0x1F1AC4u);
    ctx->pc = 0x1F3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3A40u, 0x1F1ABCu, 0x1F1AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AC4u;
label_1f1ac4:
    // 0x1f1ac4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F1AC4u;
    {
        const bool branch_taken_0x1f1ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AC4u;
        // 0x1f1ac8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ac4) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1ACCu;
label_1f1acc:
    // 0x1f1acc: 0xc07d112  jal         func_1F4448
    ctx->pc = 0x1F1ACCu;
    SET_GPR_U32(ctx, 31, 0x1F1AD4u);
    ctx->pc = 0x1F4448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4448u, 0x1F1ACCu, 0x1F1AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AD4u;
label_1f1ad4:
    // 0x1f1ad4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F1AD4u;
    {
        const bool branch_taken_0x1f1ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AD4u;
        // 0x1f1ad8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ad4) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1ADCu;
label_1f1adc:
    // 0x1f1adc: 0xc07d32a  jal         func_1F4CA8
    ctx->pc = 0x1F1ADCu;
    SET_GPR_U32(ctx, 31, 0x1F1AE4u);
    ctx->pc = 0x1F4CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CA8u, 0x1F1ADCu, 0x1F1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AE4u;
label_1f1ae4:
    // 0x1f1ae4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1AE4u;
    {
        const bool branch_taken_0x1f1ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AE4u;
        // 0x1f1ae8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ae4) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1AECu;
label_1f1aec:
    // 0x1f1aec: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1F1AECu;
    SET_GPR_U32(ctx, 31, 0x1F1AF4u);
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1F1AECu, 0x1F1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AF4u;
label_1f1af4:
    // 0x1f1af4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F1AF4u;
    {
        const bool branch_taken_0x1f1af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AF4u;
        // 0x1f1af8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1af4) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1AFCu;
label_1f1afc:
    // 0x1f1afc: 0xc07d516  jal         func_1F5458
    ctx->pc = 0x1F1AFCu;
    SET_GPR_U32(ctx, 31, 0x1F1B04u);
    ctx->pc = 0x1F5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5458u, 0x1F1AFCu, 0x1F1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B04u;
label_1f1b04:
    // 0x1f1b04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1B04u;
    {
        const bool branch_taken_0x1f1b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B04u;
        // 0x1f1b08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b04) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1B0Cu;
label_1f1b0c:
    // 0x1f1b0c: 0xc09d154  jal         func_274550
    ctx->pc = 0x1F1B0Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B14u);
    ctx->pc = 0x1F1B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B0Cu;
    // 0x1f1b10: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274550u, 0x1F1B0Cu, 0x1F1B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B14u;
label_1f1b14:
    // 0x1f1b14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1B14u;
    {
        const bool branch_taken_0x1f1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B14u;
        // 0x1f1b18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b14) {
            ctx->pc = 0x1F1B28u;
            goto label_1f1b28;
        }
    }
    ctx->pc = 0x1F1B1Cu;
label_1f1b1c:
    // 0x1f1b1c: 0xc09c56c  jal         func_2715B0
    ctx->pc = 0x1F1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B24u);
    ctx->pc = 0x1F1B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B1Cu;
    // 0x1f1b20: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2715B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2715B0u, 0x1F1B1Cu, 0x1F1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B24u;
label_1f1b24:
    // 0x1f1b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1b28:
    // 0x1f1b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B28u;
        // 0x1f1b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1B30u;
}
