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

// Function: sub_002DBC40
// Address: 0x2dbc40 - 0x2dbdf8
void sub_002DBC40_0x2dbc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBC40_0x2dbc40");
#endif

    switch (ctx->pc) {
        case 0x2dbc80u: goto label_2dbc80;
        case 0x2dbcc0u: goto label_2dbcc0;
        case 0x2dbcf8u: goto label_2dbcf8;
        case 0x2dbd28u: goto label_2dbd28;
        case 0x2dbd68u: goto label_2dbd68;
        case 0x2dbdb4u: goto label_2dbdb4;
        case 0x2dbdc8u: goto label_2dbdc8;
        default: break;
    }

    ctx->pc = 0x2dbc40u;

    // 0x2dbc40: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x2dbc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x2dbc44: 0xffb30418  sd          $s3, 0x418($sp)
    ctx->pc = 0x2dbc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 19));
    // 0x2dbc48: 0xffb40420  sd          $s4, 0x420($sp)
    ctx->pc = 0x2dbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 20));
    // 0x2dbc4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dbc4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc50: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2dbc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x2dbc54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dbc54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc58: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x2dbc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
    // 0x2dbc5c: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x2dbc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x2dbc60: 0xffb50428  sd          $s5, 0x428($sp)
    ctx->pc = 0x2dbc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 21));
    // 0x2dbc64: 0xffb60430  sd          $s6, 0x430($sp)
    ctx->pc = 0x2dbc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 22));
    // 0x2dbc68: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x2DBC68u;
    {
        const bool branch_taken_0x2dbc68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC68u;
        // 0x2dbc6c: 0xffbf0438  sd          $ra, 0x438($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc68) {
            ctx->pc = 0x2DBD74u;
            goto label_2dbd74;
        }
    }
    ctx->pc = 0x2DBC70u;
    // 0x2dbc70: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2dbc70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dbc74: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2DBC74u;
    {
        const bool branch_taken_0x2dbc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC74u;
        // 0x2dbc78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc74) {
            ctx->pc = 0x2DBD74u;
            goto label_2dbd74;
        }
    }
    ctx->pc = 0x2DBC7Cu;
    // 0x2dbc7c: 0x26830490  addiu       $v1, $s4, 0x490
    ctx->pc = 0x2dbc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1168));
label_2dbc80:
    // 0x2dbc80: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2dbc80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbc84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dbc88: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x2dbc88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2dbc8c: 0x0  nop
    ctx->pc = 0x2dbc8cu;
    // NOP
    // 0x2dbc90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DBC90u;
    {
        const bool branch_taken_0x2dbc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC90u;
        // 0x2dbc94: 0x24630400  addiu       $v1, $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc90) {
            ctx->pc = 0x2DBC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbc80;
        }
    }
    ctx->pc = 0x2DBC98u;
    // 0x2dbc98: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2dbc98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dbc9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dbc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dbca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbca4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbca8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DBCA8u;
    {
        const bool branch_taken_0x2dbca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCA8u;
        // 0x2dbcac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbca8) {
            ctx->pc = 0x2DBCE0u;
            goto label_2dbce0;
        }
    }
    ctx->pc = 0x2DBCB0u;
    // 0x2dbcb0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2dbcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbcb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dbcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcbc: 0x0  nop
    ctx->pc = 0x2dbcbcu;
    // NOP
label_2dbcc0:
    // 0x2dbcc0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2dbcc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbcc4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbcc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbcc8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2dbcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2dbccc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dbcccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dbcd0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2dbcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbcd4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2dbcd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbcd8: 0x1047fff9  beq         $v0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DBCD8u;
    {
        const bool branch_taken_0x2dbcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2DBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCD8u;
        // 0x2dbcdc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcd8) {
            ctx->pc = 0x2DBCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbcc0;
        }
    }
    ctx->pc = 0x2DBCE0u;
label_2dbce0:
    // 0x2dbce0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2dbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2dbce4: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x2dbce4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbce8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2dbce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2dbcec: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x2dbcecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2dbcf0: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x2dbcf0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dbcf4: 0x0  nop
    ctx->pc = 0x2dbcf4u;
    // NOP
label_2dbcf8:
    // 0x2dbcf8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2dbcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2dbcfc: 0x50560005  beql        $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBCFCu;
    {
        const bool branch_taken_0x2dbcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2dbcfc) {
            ctx->pc = 0x2DBD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCFCu;
            // 0x2dbd00: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD14u;
            goto label_2dbd14;
        }
    }
    ctx->pc = 0x2DBD04u;
    // 0x2dbd04: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DBD04u;
    {
        const bool branch_taken_0x2dbd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD04u;
        // 0x2dbd08: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd04) {
            ctx->pc = 0x2DBD7Cu;
            goto label_2dbd7c;
        }
    }
    ctx->pc = 0x2DBD0Cu;
    // 0x2dbd0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DBD0Cu;
    {
        const bool branch_taken_0x2dbd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD0Cu;
        // 0x2dbd10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd0c) {
            ctx->pc = 0x2DBD54u;
            goto label_2dbd54;
        }
    }
    ctx->pc = 0x2DBD14u;
label_2dbd14:
    // 0x2dbd14: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2dbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2dbd18: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x2dbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2dbd1c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2dbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2dbd20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2dbd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dbd24: 0x0  nop
    ctx->pc = 0x2dbd24u;
    // NOP
label_2dbd28:
    // 0x2dbd28: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2dbd28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbd2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2dbd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2dbd30: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2dbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2dbd34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbd34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbd38: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2dbd38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbd3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dbd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dbd40: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2dbd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbd44: 0x1045fff8  beq         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DBD44u;
    {
        const bool branch_taken_0x2dbd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD44u;
        // 0x2dbd48: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd44) {
            ctx->pc = 0x2DBD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbd28;
        }
    }
    ctx->pc = 0x2DBD4Cu;
    // 0x2dbd4c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2dbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2dbd50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dbd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd54:
    // 0x2dbd54: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2dbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbd58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd5c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2dbd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbd60: 0xc0b6fd8  jal         func_2DBF60
    ctx->pc = 0x2DBD60u;
    SET_GPR_U32(ctx, 31, 0x2DBD68u);
    ctx->pc = 0x2DBD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD60u;
    // 0x2dbd64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF60u, 0x2DBD60u, 0x2DBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD68u;
label_2dbd68:
    // 0x2dbd68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd6c: 0x54d50009  bnel        $a2, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DBD6Cu;
    {
        const bool branch_taken_0x2dbd6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 21));
        if (branch_taken_0x2dbd6c) {
            ctx->pc = 0x2DBD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBD6Cu;
            // 0x2dbd70: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD94u;
            goto label_2dbd94;
        }
    }
    ctx->pc = 0x2DBD74u;
label_2dbd74:
    // 0x2dbd74: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DBD74u;
    {
        const bool branch_taken_0x2dbd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD74u;
        // 0x2dbd78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd74) {
            ctx->pc = 0x2DBDCCu;
            goto label_2dbdcc;
        }
    }
    ctx->pc = 0x2DBD7Cu;
label_2dbd7c:
    // 0x2dbd7c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2dbd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2dbd80: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2dbd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbd84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbd84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbd88: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2dbd88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dbd8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dbd8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dbd90: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2dbd90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2dbd94:
    // 0x2dbd94: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2DBD94u;
    {
        const bool branch_taken_0x2dbd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd94) {
            ctx->pc = 0x2DBD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBD94u;
            // 0x2dbd98: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbcf8;
        }
    }
    ctx->pc = 0x2DBD9Cu;
    // 0x2dbd9c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2dbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2dbda0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dbda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbda4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2dbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbda8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdac: 0xc0b6fd8  jal         func_2DBF60
    ctx->pc = 0x2DBDACu;
    SET_GPR_U32(ctx, 31, 0x2DBDB4u);
    ctx->pc = 0x2DBDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDACu;
    // 0x2dbdb0: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF60u, 0x2DBDACu, 0x2DBDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDB4u;
label_2dbdb4:
    // 0x2dbdb4: 0x8e8363e0  lw          $v1, 0x63E0($s4)
    ctx->pc = 0x2dbdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 25568)));
    // 0x2dbdb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBDB8u;
    {
        const bool branch_taken_0x2dbdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDB8u;
        // 0x2dbdbc: 0xae8263a4  sw          $v0, 0x63A4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 25508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdb8) {
            ctx->pc = 0x2DBDC8u;
            goto label_2dbdc8;
        }
    }
    ctx->pc = 0x2DBDC0u;
    // 0x2dbdc0: 0xc0b70a0  jal         func_2DC280
    ctx->pc = 0x2DBDC0u;
    SET_GPR_U32(ctx, 31, 0x2DBDC8u);
    ctx->pc = 0x2DBDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDC0u;
    // 0x2dbdc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC280u, 0x2DBDC0u, 0x2DBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDC8u;
label_2dbdc8:
    // 0x2dbdc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbdcc:
    // 0x2dbdcc: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x2dbdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2dbdd0: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x2dbdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x2dbdd4: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x2dbdd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2dbdd8: 0xdfb30418  ld          $s3, 0x418($sp)
    ctx->pc = 0x2dbdd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2dbddc: 0xdfb40420  ld          $s4, 0x420($sp)
    ctx->pc = 0x2dbddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2dbde0: 0xdfb50428  ld          $s5, 0x428($sp)
    ctx->pc = 0x2dbde0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2dbde4: 0xdfb60430  ld          $s6, 0x430($sp)
    ctx->pc = 0x2dbde4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2dbde8: 0xdfbf0438  ld          $ra, 0x438($sp)
    ctx->pc = 0x2dbde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x2dbdec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDECu;
        // 0x2dbdf0: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBDF4u;
    // 0x2dbdf4: 0x0  nop
    ctx->pc = 0x2dbdf4u;
    // NOP
    ctx->pc = 0x2dbdf8u;
}
