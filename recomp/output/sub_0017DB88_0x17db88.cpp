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

// Function: sub_0017DB88
// Address: 0x17db88 - 0x17dd00
void sub_0017DB88_0x17db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DB88_0x17db88");
#endif

    switch (ctx->pc) {
        case 0x17dcc4u: goto label_17dcc4;
        default: break;
    }

    ctx->pc = 0x17db88u;

    // 0x17db88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17db8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17db90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17db94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17db94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17db9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17dba0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x17dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17dba4: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x17DBA4u;
    {
        const bool branch_taken_0x17dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dba4) {
            ctx->pc = 0x17DBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DBA4u;
            // 0x17dba8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DCECu;
            goto label_17dcec;
        }
    }
    ctx->pc = 0x17DBACu;
    // 0x17dbac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17dbb0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17DBB0u;
    {
        const bool branch_taken_0x17dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBB0u;
        // 0x17dbb4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbb0) {
            ctx->pc = 0x17DBECu;
            goto label_17dbec;
        }
    }
    ctx->pc = 0x17DBB8u;
    // 0x17dbb8: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x17dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17dbbc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x17dbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17dbc0: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x17DBC0u;
    {
        const bool branch_taken_0x17dbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dbc0) {
            ctx->pc = 0x17DBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DBC0u;
            // 0x17dbc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DCECu;
            goto label_17dcec;
        }
    }
    ctx->pc = 0x17DBC8u;
    // 0x17dbc8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17dbcc: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x17DBCCu;
    {
        const bool branch_taken_0x17dbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17dbcc) {
            ctx->pc = 0x17DBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DBCCu;
            // 0x17dbd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DCECu;
            goto label_17dcec;
        }
    }
    ctx->pc = 0x17DBD4u;
    // 0x17dbd4: 0xde030070  ld          $v1, 0x70($s0)
    ctx->pc = 0x17dbd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x17dbd8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x17dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17dbdc: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x17dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x17dbe0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17dbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17dbe4: 0x50620041  beql        $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x17DBE4u;
    {
        const bool branch_taken_0x17dbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17dbe4) {
            ctx->pc = 0x17DBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DBE4u;
            // 0x17dbe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DCECu;
            goto label_17dcec;
        }
    }
    ctx->pc = 0x17DBECu;
label_17dbec:
    // 0x17dbec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17dbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbf0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DBF0u;
    {
        const bool branch_taken_0x17dbf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBF0u;
        // 0x17dbf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbf0) {
            ctx->pc = 0x17DC18u;
            goto label_17dc18;
        }
    }
    ctx->pc = 0x17DBF8u;
    // 0x17dbf8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x17dbfc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DBFCu;
    {
        const bool branch_taken_0x17dbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dbfc) {
            ctx->pc = 0x17DC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DBFCu;
            // 0x17dc00: 0x8e1100d0  lw          $s1, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DC1Cu;
            goto label_17dc1c;
        }
    }
    ctx->pc = 0x17DC04u;
    // 0x17dc04: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17dc08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DC08u;
    {
        const bool branch_taken_0x17dc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc08) {
            ctx->pc = 0x17DC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DC08u;
            // 0x17dc0c: 0x8e1100d0  lw          $s1, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DC1Cu;
            goto label_17dc1c;
        }
    }
    ctx->pc = 0x17DC10u;
    // 0x17dc10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dc14: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17dc14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17dc18:
    // 0x17dc18: 0x8e1100d0  lw          $s1, 0xD0($s0)
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_17dc1c:
    // 0x17dc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc20: 0x14a00026  bnez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x17DC20u;
    {
        const bool branch_taken_0x17dc20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC20u;
        // 0x17dc24: 0x12880b  movn        $s1, $zero, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc20) {
            ctx->pc = 0x17DCBCu;
            goto label_17dcbc;
        }
    }
    ctx->pc = 0x17DC28u;
    // 0x17dc28: 0x14c00018  bnez        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x17DC28u;
    {
        const bool branch_taken_0x17dc28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc28) {
            ctx->pc = 0x17DC8Cu;
            goto label_17dc8c;
        }
    }
    ctx->pc = 0x17DC30u;
    // 0x17dc30: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x17dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x17dc34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DC34u;
    {
        const bool branch_taken_0x17dc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC34u;
        // 0x17dc38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc34) {
            ctx->pc = 0x17DC4Cu;
            goto label_17dc4c;
        }
    }
    ctx->pc = 0x17DC3Cu;
    // 0x17dc3c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17DC3Cu;
    {
        const bool branch_taken_0x17dc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC3Cu;
        // 0x17dc40: 0x2c820002  sltiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc3c) {
            ctx->pc = 0x17DC6Cu;
            goto label_17dc6c;
        }
    }
    ctx->pc = 0x17DC44u;
    // 0x17dc44: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DCECu;
            goto label_17dcec;
        }
    }
    ctx->pc = 0x17DC4Cu;
label_17dc4c:
    // 0x17dc4c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17DC4Cu;
    {
        const bool branch_taken_0x17dc4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc4c) {
            ctx->pc = 0x17DC8Cu;
            goto label_17dc8c;
        }
    }
    ctx->pc = 0x17DC54u;
    // 0x17dc54: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x17dc58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17DC58u;
    {
        const bool branch_taken_0x17dc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc58) {
            ctx->pc = 0x17DC8Cu;
            goto label_17dc8c;
        }
    }
    ctx->pc = 0x17DC60u;
    // 0x17dc60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dc64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17DC64u;
    {
        const bool branch_taken_0x17dc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC64u;
        // 0x17dc68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc64) {
            ctx->pc = 0x17DC8Cu;
            goto label_17dc8c;
        }
    }
    ctx->pc = 0x17DC6Cu;
label_17dc6c:
    // 0x17dc6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DC6Cu;
    {
        const bool branch_taken_0x17dc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc6c) {
            ctx->pc = 0x17DC8Cu;
            goto label_17dc8c;
        }
    }
    ctx->pc = 0x17DC74u;
    // 0x17dc74: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x17dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x17dc78: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17dc78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17dc7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DC7Cu;
    {
        const bool branch_taken_0x17dc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc7c) {
            ctx->pc = 0x17DC8Cu;
            goto label_17dc8c;
        }
    }
    ctx->pc = 0x17DC84u;
    // 0x17dc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dc88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17dc8c:
    // 0x17dc8c: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x17DC8Cu;
    {
        const bool branch_taken_0x17dc8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc8c) {
            ctx->pc = 0x17DCBCu;
            goto label_17dcbc;
        }
    }
    ctx->pc = 0x17DC94u;
    // 0x17dc94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x17dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17dc98: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x17dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x17dc9c: 0x90440020  lbu         $a0, 0x20($v0)
    ctx->pc = 0x17dc9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17dca0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DCA0u;
    {
        const bool branch_taken_0x17dca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17dca0) {
            ctx->pc = 0x17DCB4u;
            goto label_17dcb4;
        }
    }
    ctx->pc = 0x17DCA8u;
    // 0x17dca8: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x17dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x17dcac: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x17dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x17dcb0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x17dcb0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17dcb4:
    // 0x17dcb4: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x17DCB4u;
    {
        const bool branch_taken_0x17dcb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dcb4) {
            ctx->pc = 0x17DCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DCB4u;
            // 0x17dcb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DCECu;
            goto label_17dcec;
        }
    }
    ctx->pc = 0x17DCBCu;
label_17dcbc:
    // 0x17dcbc: 0xc05f620  jal         func_17D880
    ctx->pc = 0x17DCBCu;
    SET_GPR_U32(ctx, 31, 0x17DCC4u);
    ctx->pc = 0x17DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCBCu;
    // 0x17dcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D880u, 0x17DCBCu, 0x17DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DCC4u;
label_17dcc4:
    // 0x17dcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dcc8: 0xae1100d8  sw          $s1, 0xD8($s0)
    ctx->pc = 0x17dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
    // 0x17dccc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x17dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x17dcd0: 0xae1200dc  sw          $s2, 0xDC($s0)
    ctx->pc = 0x17dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 18));
    // 0x17dcd4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17dcd8: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x17dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x17dcdc: 0x90440020  lbu         $a0, 0x20($v0)
    ctx->pc = 0x17dcdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17dce0: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x17dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x17dce4: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x17dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x17dce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17dce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17dcec:
    // 0x17dcec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17dcecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17dcf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17dcf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dcf4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17dcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17DCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCF8u;
        // 0x17dcfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DD00u;
}
