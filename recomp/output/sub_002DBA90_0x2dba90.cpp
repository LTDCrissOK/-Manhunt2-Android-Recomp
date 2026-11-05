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

// Function: sub_002DBA90
// Address: 0x2dba90 - 0x2dbc40
void sub_002DBA90_0x2dba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBA90_0x2dba90");
#endif

    switch (ctx->pc) {
        case 0x2dbad0u: goto label_2dbad0;
        case 0x2dbb10u: goto label_2dbb10;
        case 0x2dbb48u: goto label_2dbb48;
        case 0x2dbb70u: goto label_2dbb70;
        case 0x2dbbb8u: goto label_2dbbb8;
        case 0x2dbc00u: goto label_2dbc00;
        case 0x2dbc14u: goto label_2dbc14;
        default: break;
    }

    ctx->pc = 0x2dba90u;

    // 0x2dba90: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x2dba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x2dba94: 0xffb30418  sd          $s3, 0x418($sp)
    ctx->pc = 0x2dba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 19));
    // 0x2dba98: 0xffb40420  sd          $s4, 0x420($sp)
    ctx->pc = 0x2dba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 20));
    // 0x2dba9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dba9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbaa0: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2dbaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x2dbaa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dbaa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbaa8: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x2dbaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
    // 0x2dbaac: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x2dbaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x2dbab0: 0xffb50428  sd          $s5, 0x428($sp)
    ctx->pc = 0x2dbab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 21));
    // 0x2dbab4: 0xffb60430  sd          $s6, 0x430($sp)
    ctx->pc = 0x2dbab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 22));
    // 0x2dbab8: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x2DBAB8u;
    {
        const bool branch_taken_0x2dbab8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAB8u;
        // 0x2dbabc: 0xffbf0438  sd          $ra, 0x438($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbab8) {
            ctx->pc = 0x2DBBC4u;
            goto label_2dbbc4;
        }
    }
    ctx->pc = 0x2DBAC0u;
    // 0x2dbac0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2dbac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dbac4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2DBAC4u;
    {
        const bool branch_taken_0x2dbac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAC4u;
        // 0x2dbac8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbac4) {
            ctx->pc = 0x2DBBC4u;
            goto label_2dbbc4;
        }
    }
    ctx->pc = 0x2DBACCu;
    // 0x2dbacc: 0x26830490  addiu       $v1, $s4, 0x490
    ctx->pc = 0x2dbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1168));
label_2dbad0:
    // 0x2dbad0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2dbad0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbad4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dbad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dbad8: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x2dbad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2dbadc: 0x0  nop
    ctx->pc = 0x2dbadcu;
    // NOP
    // 0x2dbae0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DBAE0u;
    {
        const bool branch_taken_0x2dbae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAE0u;
        // 0x2dbae4: 0x24630400  addiu       $v1, $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbae0) {
            ctx->pc = 0x2DBAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbad0;
        }
    }
    ctx->pc = 0x2DBAE8u;
    // 0x2dbae8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2dbae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dbaec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dbaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbaf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dbaf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbaf4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2dbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbaf8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DBAF8u;
    {
        const bool branch_taken_0x2dbaf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAF8u;
        // 0x2dbafc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbaf8) {
            ctx->pc = 0x2DBB38u;
            goto label_2dbb38;
        }
    }
    ctx->pc = 0x2DBB00u;
    // 0x2dbb00: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2dbb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbb04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dbb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb0c: 0x0  nop
    ctx->pc = 0x2dbb0cu;
    // NOP
label_2dbb10:
    // 0x2dbb10: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2dbb10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbb14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbb14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbb18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dbb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dbb1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dbb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dbb20: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2dbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2dbb24: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2dbb24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbb28: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2dbb28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2dbb2c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2dbb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbb30: 0x1067fff7  beq         $v1, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DBB30u;
    {
        const bool branch_taken_0x2dbb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2DBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB30u;
        // 0x2dbb34: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb30) {
            ctx->pc = 0x2DBB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbb10;
        }
    }
    ctx->pc = 0x2DBB38u;
label_2dbb38:
    // 0x2dbb38: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x2dbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2dbb3c: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x2dbb3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbb40: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x2dbb40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2dbb44: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2dbb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2dbb48:
    // 0x2dbb48: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2dbb48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbb4c: 0x10960005  beq         $a0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBB4Cu;
    {
        const bool branch_taken_0x2dbb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB4Cu;
        // 0x2dbb50: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb4c) {
            ctx->pc = 0x2DBB64u;
            goto label_2dbb64;
        }
    }
    ctx->pc = 0x2DBB54u;
    // 0x2dbb54: 0x5480001d  bnel        $a0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DBB54u;
    {
        const bool branch_taken_0x2dbb54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb54) {
            ctx->pc = 0x2DBB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBB54u;
            // 0x2dbb58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBBCCu;
            goto label_2dbbcc;
        }
    }
    ctx->pc = 0x2DBB5Cu;
    // 0x2dbb5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DBB5Cu;
    {
        const bool branch_taken_0x2dbb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB5Cu;
        // 0x2dbb60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb5c) {
            ctx->pc = 0x2DBBA4u;
            goto label_2dbba4;
        }
    }
    ctx->pc = 0x2DBB64u;
label_2dbb64:
    // 0x2dbb64: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2dbb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbb68: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x2dbb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2dbb6c: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x2dbb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_2dbb70:
    // 0x2dbb70: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2dbb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbb74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dbb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2dbb78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dbb7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbb7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbb80: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2dbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2dbb84: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2dbb84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbb88: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2dbb88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2dbb8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dbb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dbb90: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2dbb90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbb94: 0x1067fff6  beq         $v1, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DBB94u;
    {
        const bool branch_taken_0x2dbb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2DBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB94u;
        // 0x2dbb98: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb94) {
            ctx->pc = 0x2DBB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbb70;
        }
    }
    ctx->pc = 0x2DBB9Cu;
    // 0x2dbb9c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2dbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2dbba0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dbba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dbba4:
    // 0x2dbba4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2dbba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbac: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2dbbacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbbb0: 0xc0b6fd8  jal         func_2DBF60
    ctx->pc = 0x2DBBB0u;
    SET_GPR_U32(ctx, 31, 0x2DBBB8u);
    ctx->pc = 0x2DBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBBB0u;
    // 0x2dbbb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF60u, 0x2DBBB0u, 0x2DBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBB8u;
label_2dbbb8:
    // 0x2dbbb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbbc: 0x54d50008  bnel        $a2, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DBBBCu;
    {
        const bool branch_taken_0x2dbbbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 21));
        if (branch_taken_0x2dbbbc) {
            ctx->pc = 0x2DBBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBBBCu;
            // 0x2dbbc0: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBBE0u;
            goto label_2dbbe0;
        }
    }
    ctx->pc = 0x2DBBC4u;
label_2dbbc4:
    // 0x2dbbc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBBC4u;
    {
        const bool branch_taken_0x2dbbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBC4u;
        // 0x2dbbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbc4) {
            ctx->pc = 0x2DBC18u;
            goto label_2dbc18;
        }
    }
    ctx->pc = 0x2DBBCCu;
label_2dbbcc:
    // 0x2dbbcc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2dbbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbbd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbbd4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2dbbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dbbd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dbbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dbbdc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2dbbdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2dbbe0:
    // 0x2dbbe0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2DBBE0u;
    {
        const bool branch_taken_0x2dbbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBE0u;
        // 0x2dbbe4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbe0) {
            ctx->pc = 0x2DBB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbb48;
        }
    }
    ctx->pc = 0x2DBBE8u;
    // 0x2dbbe8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2dbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2dbbec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dbbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbf0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2dbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbbf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbf8: 0xc0b6fd8  jal         func_2DBF60
    ctx->pc = 0x2DBBF8u;
    SET_GPR_U32(ctx, 31, 0x2DBC00u);
    ctx->pc = 0x2DBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBBF8u;
    // 0x2dbbfc: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF60u, 0x2DBBF8u, 0x2DBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC00u;
label_2dbc00:
    // 0x2dbc00: 0x8e8363e0  lw          $v1, 0x63E0($s4)
    ctx->pc = 0x2dbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 25568)));
    // 0x2dbc04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBC04u;
    {
        const bool branch_taken_0x2dbc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC04u;
        // 0x2dbc08: 0xae8263a4  sw          $v0, 0x63A4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 25508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc04) {
            ctx->pc = 0x2DBC14u;
            goto label_2dbc14;
        }
    }
    ctx->pc = 0x2DBC0Cu;
    // 0x2dbc0c: 0xc0b70a0  jal         func_2DC280
    ctx->pc = 0x2DBC0Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC14u);
    ctx->pc = 0x2DBC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC0Cu;
    // 0x2dbc10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC280u, 0x2DBC0Cu, 0x2DBC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC14u;
label_2dbc14:
    // 0x2dbc14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbc18:
    // 0x2dbc18: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x2dbc18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2dbc1c: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x2dbc1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x2dbc20: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x2dbc20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2dbc24: 0xdfb30418  ld          $s3, 0x418($sp)
    ctx->pc = 0x2dbc24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2dbc28: 0xdfb40420  ld          $s4, 0x420($sp)
    ctx->pc = 0x2dbc28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2dbc2c: 0xdfb50428  ld          $s5, 0x428($sp)
    ctx->pc = 0x2dbc2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2dbc30: 0xdfb60430  ld          $s6, 0x430($sp)
    ctx->pc = 0x2dbc30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2dbc34: 0xdfbf0438  ld          $ra, 0x438($sp)
    ctx->pc = 0x2dbc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x2dbc38: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC38u;
        // 0x2dbc3c: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBC40u;
}
