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

// Function: sub_003A4D80
// Address: 0x3a4d80 - 0x3a4f18
void sub_003A4D80_0x3a4d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4D80_0x3a4d80");
#endif

    switch (ctx->pc) {
        case 0x3a4df0u: goto label_3a4df0;
        case 0x3a4e64u: goto label_3a4e64;
        case 0x3a4e6cu: goto label_3a4e6c;
        default: break;
    }

    ctx->pc = 0x3a4d80u;

    // 0x3a4d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a4d84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a4d88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a4d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4d8c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3a4d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3a4d90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a4d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4d94: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3a4d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3a4d98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3a4d98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4d9c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3a4d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3a4da0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3a4da0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4da4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3a4da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3a4da8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3a4da8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4dac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3a4dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3a4db0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4db4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a4db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a4db8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a4db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a4dbc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3a4dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3a4dc0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x3a4dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x3a4dc4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3a4dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x3a4dc8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3a4dc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a4dcc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3A4DCCu;
    {
        const bool branch_taken_0x3a4dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DCCu;
        // 0x3a4dd0: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dcc) {
            ctx->pc = 0x3A4EB8u;
            goto label_3a4eb8;
        }
    }
    ctx->pc = 0x3A4DD4u;
    // 0x3a4dd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4dd8: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x3a4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3a4ddc: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x3a4ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a4de0: 0x241e000d  addiu       $fp, $zero, 0xD
    ctx->pc = 0x3a4de0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3a4de4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3a4de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4de8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3a4de8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a4dec: 0x0  nop
    ctx->pc = 0x3a4decu;
    // NOP
label_3a4df0:
    // 0x3a4df0: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4DF0u;
    {
        const bool branch_taken_0x3a4df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x3a4df0) {
            ctx->pc = 0x3A4DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4DF0u;
            // 0x3a4df4: 0x80a20001  lb          $v0, 0x1($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4E04u;
            goto label_3a4e04;
        }
    }
    ctx->pc = 0x3A4DF8u;
    // 0x3a4df8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A4DF8u;
    {
        const bool branch_taken_0x3a4df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DF8u;
        // 0x3a4dfc: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4df8) {
            ctx->pc = 0x3A4E94u;
            goto label_3a4e94;
        }
    }
    ctx->pc = 0x3A4E00u;
    // 0x3a4e00: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x3a4e00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3a4e04:
    // 0x3a4e04: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4E04u;
    {
        const bool branch_taken_0x3a4e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x3a4e04) {
            ctx->pc = 0x3A4E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4E04u;
            // 0x3a4e08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4E18u;
            goto label_3a4e18;
        }
    }
    ctx->pc = 0x3A4E0Cu;
    // 0x3a4e0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4E0Cu;
    {
        const bool branch_taken_0x3a4e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E0Cu;
        // 0x3a4e10: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e0c) {
            ctx->pc = 0x3A4E20u;
            goto label_3a4e20;
        }
    }
    ctx->pc = 0x3A4E14u;
    // 0x3a4e14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a4e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a4e18:
    // 0x3a4e18: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x3a4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3a4e1c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3a4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3a4e20:
    // 0x3a4e20: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a4e20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4e24: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4E24u;
    {
        const bool branch_taken_0x3a4e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3A4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E24u;
        // 0x3a4e28: 0x2448823  subu        $s1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e24) {
            ctx->pc = 0x3A4E34u;
            goto label_3a4e34;
        }
    }
    ctx->pc = 0x3A4E2Cu;
    // 0x3a4e2c: 0x145e0003  bne         $v0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4E2Cu;
    {
        const bool branch_taken_0x3a4e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x3A4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E2Cu;
        // 0x3a4e30: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e2c) {
            ctx->pc = 0x3A4E3Cu;
            goto label_3a4e3c;
        }
    }
    ctx->pc = 0x3A4E34u;
label_3a4e34:
    // 0x3a4e34: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4e38: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x3a4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_3a4e3c:
    // 0x3a4e3c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a4e3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a4e40: 0x50740004  beql        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4E40u;
    {
        const bool branch_taken_0x3a4e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x3a4e40) {
            ctx->pc = 0x3A4E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4E40u;
            // 0x3a4e44: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4E54u;
            goto label_3a4e54;
        }
    }
    ctx->pc = 0x3A4E48u;
    // 0x3a4e48: 0x147e0003  bne         $v1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4E48u;
    {
        const bool branch_taken_0x3a4e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x3A4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E48u;
        // 0x3a4e4c: 0x2642821  addu        $a1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e48) {
            ctx->pc = 0x3A4E58u;
            goto label_3a4e58;
        }
    }
    ctx->pc = 0x3A4E50u;
    // 0x3a4e50: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3a4e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a4e54:
    // 0x3a4e54: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x3a4e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_3a4e58:
    // 0x3a4e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a4e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4e5c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3A4E5Cu;
    SET_GPR_U32(ctx, 31, 0x3A4E64u);
    ctx->pc = 0x3A4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4E5Cu;
    // 0x3a4e60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3A4E5Cu, 0x3A4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4E64u;
label_3a4e64:
    // 0x3a4e64: 0xc0e9068  jal         func_3A41A0
    ctx->pc = 0x3A4E64u;
    SET_GPR_U32(ctx, 31, 0x3A4E6Cu);
    ctx->pc = 0x3A4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4E64u;
    // 0x3a4e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A41A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A41A0u, 0x3A4E64u, 0x3A4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4E6Cu;
label_3a4e6c:
    // 0x3a4e6c: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x3a4e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3a4e70: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x3a4e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3a4e74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A4E74u;
    {
        const bool branch_taken_0x3a4e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4e74) {
            ctx->pc = 0x3A4E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4E74u;
            // 0x3a4e78: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4E7Cu;
            goto label_3a4e7c;
        }
    }
    ctx->pc = 0x3A4E7Cu;
label_3a4e7c:
    // 0x3a4e7c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x3a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a4e80: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x3a4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x3a4e84: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a4e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a4e88: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x3a4e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a4e8c: 0x12b6000a  beq         $s5, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x3A4E8Cu;
    {
        const bool branch_taken_0x3a4e8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x3A4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E8Cu;
        // 0x3a4e90: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e8c) {
            ctx->pc = 0x3A4EB8u;
            goto label_3a4eb8;
        }
    }
    ctx->pc = 0x3A4E94u;
label_3a4e94:
    // 0x3a4e94: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3a4e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a4e98: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3a4e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a4e9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4E9Cu;
    {
        const bool branch_taken_0x3a4e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E9Cu;
        // 0x3a4ea0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e9c) {
            ctx->pc = 0x3A4EB8u;
            goto label_3a4eb8;
        }
    }
    ctx->pc = 0x3A4EA4u;
    // 0x3a4ea4: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x3a4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3a4ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a4ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4eac: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3a4eacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a4eb0: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3A4EB0u;
    {
        const bool branch_taken_0x3a4eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4eb0) {
            ctx->pc = 0x3A4EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4EB0u;
            // 0x3a4eb4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4EB8u;
label_3a4eb8:
    // 0x3a4eb8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a4ebc: 0x24423780  addiu       $v0, $v0, 0x3780
    ctx->pc = 0x3a4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14208));
    // 0x3a4ec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x413780u));
    // 0x3a4ec4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4EC4u;
    {
        const bool branch_taken_0x3a4ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4ec4) {
            ctx->pc = 0x3A4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4EC4u;
            // 0x3a4ec8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4EE4u;
            goto label_3a4ee4;
        }
    }
    ctx->pc = 0x3A4ECCu;
    // 0x3a4ecc: 0xac57000c  sw          $s7, 0xC($v0)
    ctx->pc = 0x3a4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 23));
    // 0x3a4ed0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4ed4: 0xac560008  sw          $s6, 0x8($v0)
    ctx->pc = 0x3a4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    // 0x3a4ed8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3a4edc: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x3a4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x3a4ee0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3a4ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a4ee4:
    // 0x3a4ee4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a4ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4ee8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a4ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a4eec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a4eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4ef0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3a4ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a4ef4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3a4ef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4ef8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3a4ef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a4efc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3a4efcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4f00: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3a4f00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3a4f04: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3a4f04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a4f08: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3a4f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3a4f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F0Cu;
        // 0x3a4f10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4F14u;
    // 0x3a4f14: 0x0  nop
    ctx->pc = 0x3a4f14u;
    // NOP
    ctx->pc = 0x3a4f18u;
}
