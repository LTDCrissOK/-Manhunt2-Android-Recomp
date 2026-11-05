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

// Function: sub_0017FA48
// Address: 0x17fa48 - 0x17fc60
void sub_0017FA48_0x17fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FA48_0x17fa48");
#endif

    switch (ctx->pc) {
        case 0x17fa94u: goto label_17fa94;
        case 0x17faa8u: goto label_17faa8;
        case 0x17fabcu: goto label_17fabc;
        case 0x17fad0u: goto label_17fad0;
        case 0x17fb00u: goto label_17fb00;
        case 0x17fb38u: goto label_17fb38;
        case 0x17fb50u: goto label_17fb50;
        case 0x17fbb0u: goto label_17fbb0;
        case 0x17fbd4u: goto label_17fbd4;
        case 0x17fc00u: goto label_17fc00;
        case 0x17fc20u: goto label_17fc20;
        default: break;
    }

    ctx->pc = 0x17fa48u;

    // 0x17fa48: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x17fa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x17fa4c: 0xffb30198  sd          $s3, 0x198($sp)
    ctx->pc = 0x17fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 19));
    // 0x17fa50: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x17fa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x17fa54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17fa54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa58: 0xffb10188  sd          $s1, 0x188($sp)
    ctx->pc = 0x17fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 17));
    // 0x17fa5c: 0xffb20190  sd          $s2, 0x190($sp)
    ctx->pc = 0x17fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 18));
    // 0x17fa60: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x17fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x17fa64: 0xffb501a8  sd          $s5, 0x1A8($sp)
    ctx->pc = 0x17fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 21));
    // 0x17fa68: 0xffb601b0  sd          $s6, 0x1B0($sp)
    ctx->pc = 0x17fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 22));
    // 0x17fa6c: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x17fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
    // 0x17fa70: 0x92620412  lbu         $v0, 0x412($s3)
    ctx->pc = 0x17fa70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1042)));
    // 0x17fa74: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x17FA74u;
    {
        const bool branch_taken_0x17fa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA74u;
        // 0x17fa78: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa74) {
            ctx->pc = 0x17FC38u;
            goto label_17fc38;
        }
    }
    ctx->pc = 0x17FA7Cu;
    // 0x17fa7c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17fa80: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x17fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x17fa84: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FA84u;
    {
        const bool branch_taken_0x17fa84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa84) {
            ctx->pc = 0x17FA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FA84u;
            // 0x17fa88: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FA9Cu;
            goto label_17fa9c;
        }
    }
    ctx->pc = 0x17FA8Cu;
    // 0x17fa8c: 0xc060140  jal         func_180500
    ctx->pc = 0x17FA8Cu;
    SET_GPR_U32(ctx, 31, 0x17FA94u);
    ctx->pc = 0x180500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180500u, 0x17FA8Cu, 0x17FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA94u;
label_17fa94:
    // 0x17fa94: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x17FA94u;
    {
        const bool branch_taken_0x17fa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA94u;
        // 0x17fa98: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa94) {
            ctx->pc = 0x17FC38u;
            goto label_17fc38;
        }
    }
    ctx->pc = 0x17FA9Cu;
label_17fa9c:
    // 0x17fa9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17fa9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faa0: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x17FAA0u;
    SET_GPR_U32(ctx, 31, 0x17FAA8u);
    ctx->pc = 0x17FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAA0u;
    // 0x17faa4: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x17FAA0u, 0x17FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAA8u;
label_17faa8:
    // 0x17faa8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17faa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faac: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FAACu;
    {
        const bool branch_taken_0x17faac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAACu;
        // 0x17fab0: 0x27b60080  addiu       $s6, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17faac) {
            ctx->pc = 0x17FAC4u;
            goto label_17fac4;
        }
    }
    ctx->pc = 0x17FAB4u;
    // 0x17fab4: 0xc060140  jal         func_180500
    ctx->pc = 0x17FAB4u;
    SET_GPR_U32(ctx, 31, 0x17FABCu);
    ctx->pc = 0x17FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAB4u;
    // 0x17fab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180500u, 0x17FAB4u, 0x17FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FABCu;
label_17fabc:
    // 0x17fabc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x17FABCu;
    {
        const bool branch_taken_0x17fabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FABCu;
        // 0x17fac0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fabc) {
            ctx->pc = 0x17FC38u;
            goto label_17fc38;
        }
    }
    ctx->pc = 0x17FAC4u;
label_17fac4:
    // 0x17fac4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17fac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fac8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17facc: 0x0  nop
    ctx->pc = 0x17faccu;
    // NOP
label_17fad0:
    // 0x17fad0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17fad4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17fad8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17fadc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17fadcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17fae0: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x17fae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17fae4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FAE4u;
    {
        const bool branch_taken_0x17fae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAE4u;
        // 0x17fae8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fae4) {
            ctx->pc = 0x17FAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fad0;
        }
    }
    ctx->pc = 0x17FAECu;
    // 0x17faec: 0x92620410  lbu         $v0, 0x410($s3)
    ctx->pc = 0x17faecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1040)));
    // 0x17faf0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x17FAF0u;
    {
        const bool branch_taken_0x17faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAF0u;
        // 0x17faf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17faf0) {
            ctx->pc = 0x17FBF0u;
            goto label_17fbf0;
        }
    }
    ctx->pc = 0x17FAF8u;
    // 0x17faf8: 0x27b50100  addiu       $s5, $sp, 0x100
    ctx->pc = 0x17faf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17fafc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17fafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17fb00:
    // 0x17fb00: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17fb04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17fb08: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17fb0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17fb0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17fb10: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x17fb10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17fb14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FB14u;
    {
        const bool branch_taken_0x17fb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB14u;
        // 0x17fb18: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb14) {
            ctx->pc = 0x17FB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb00;
        }
    }
    ctx->pc = 0x17FB1Cu;
    // 0x17fb1c: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x17FB1Cu;
    {
        const bool branch_taken_0x17fb1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB1Cu;
        // 0x17fb20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb1c) {
            ctx->pc = 0x17FBA0u;
            goto label_17fba0;
        }
    }
    ctx->pc = 0x17FB24u;
    // 0x17fb24: 0x926b0410  lbu         $t3, 0x410($s3)
    ctx->pc = 0x17fb24u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1040)));
    // 0x17fb28: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x17fb28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb2c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x17fb2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb30: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x17fb30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fb34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17fb38:
    // 0x17fb38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb3c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x17fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x17fb40: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x17fb40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fb44: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x17fb44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17FB48u;
    {
        const bool branch_taken_0x17fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB48u;
        // 0x17fb4c: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb48) {
            ctx->pc = 0x17FB54u;
            goto label_17fb54;
        }
    }
    ctx->pc = 0x17FB50u;
label_17fb50:
    // 0x17fb50: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x17fb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17fb54:
    // 0x17fb54: 0xcb102b  sltu        $v0, $a2, $t3
    ctx->pc = 0x17fb54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x17fb58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17FB58u;
    {
        const bool branch_taken_0x17fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB58u;
        // 0x17fb5c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb58) {
            ctx->pc = 0x17FB90u;
            goto label_17fb90;
        }
    }
    ctx->pc = 0x17FB60u;
    // 0x17fb60: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x17fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x17fb64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fb68: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FB68u;
    {
        const bool branch_taken_0x17fb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB68u;
        // 0x17fb6c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb68) {
            ctx->pc = 0x17FB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb50;
        }
    }
    ctx->pc = 0x17FB70u;
    // 0x17fb70: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x17fb74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x17fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17fb78: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x17fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17fb7c: 0x1468fff4  bne         $v1, $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17FB7Cu;
    {
        const bool branch_taken_0x17fb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x17FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB7Cu;
        // 0x17fb80: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb7c) {
            ctx->pc = 0x17FB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb50;
        }
    }
    ctx->pc = 0x17FB84u;
    // 0x17fb84: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x17fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17fb88: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x17fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x17fb8c: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x17fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
label_17fb90:
    // 0x17fb90: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x17fb90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17fb94: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x17fb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x17fb98: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17FB98u;
    {
        const bool branch_taken_0x17fb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB98u;
        // 0x17fb9c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb98) {
            ctx->pc = 0x17FB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb38;
        }
    }
    ctx->pc = 0x17FBA0u;
label_17fba0:
    // 0x17fba0: 0x92710410  lbu         $s1, 0x410($s3)
    ctx->pc = 0x17fba0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1040)));
    // 0x17fba4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17FBA4u;
    {
        const bool branch_taken_0x17fba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBA4u;
        // 0x17fba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fba4) {
            ctx->pc = 0x17FBF0u;
            goto label_17fbf0;
        }
    }
    ctx->pc = 0x17FBACu;
    // 0x17fbac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17fbb0:
    // 0x17fbb0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17fbb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fbb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FBB8u;
    {
        const bool branch_taken_0x17fbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBB8u;
        // 0x17fbbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbb8) {
            ctx->pc = 0x17FBC8u;
            goto label_17fbc8;
        }
    }
    ctx->pc = 0x17FBC0u;
    // 0x17fbc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17FBC0u;
    {
        const bool branch_taken_0x17fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBC0u;
        // 0x17fbc4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbc0) {
            ctx->pc = 0x17FBD4u;
            goto label_17fbd4;
        }
    }
    ctx->pc = 0x17FBC8u;
label_17fbc8:
    // 0x17fbc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbcc: 0xc060184  jal         func_180610
    ctx->pc = 0x17FBCCu;
    SET_GPR_U32(ctx, 31, 0x17FBD4u);
    ctx->pc = 0x17FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBCCu;
    // 0x17fbd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180610u, 0x17FBCCu, 0x17FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBD4u;
label_17fbd4:
    // 0x17fbd4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FBD4u;
    {
        const bool branch_taken_0x17fbd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBD4u;
        // 0x17fbd8: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbd4) {
            ctx->pc = 0x17FBE0u;
            goto label_17fbe0;
        }
    }
    ctx->pc = 0x17FBDCu;
    // 0x17fbdc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17fbdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17fbe0:
    // 0x17fbe0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17fbe4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17fbe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17fbe8: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x17FBE8u;
    {
        const bool branch_taken_0x17fbe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBE8u;
        // 0x17fbec: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbe8) {
            ctx->pc = 0x17FBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fbb0;
        }
    }
    ctx->pc = 0x17FBF0u;
label_17fbf0:
    // 0x17fbf0: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x17FBF0u;
    {
        const bool branch_taken_0x17fbf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBF0u;
        // 0x17fbf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbf0) {
            ctx->pc = 0x17FC34u;
            goto label_17fc34;
        }
    }
    ctx->pc = 0x17FBF8u;
    // 0x17fbf8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17fbfc: 0x0  nop
    ctx->pc = 0x17fbfcu;
    // NOP
label_17fc00:
    // 0x17fc00: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x17fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x17fc04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fc08: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FC08u;
    {
        const bool branch_taken_0x17fc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC08u;
        // 0x17fc0c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc08) {
            ctx->pc = 0x17FC24u;
            goto label_17fc24;
        }
    }
    ctx->pc = 0x17FC10u;
    // 0x17fc10: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x17fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x17fc14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fc18: 0xc06016e  jal         func_1805B8
    ctx->pc = 0x17FC18u;
    SET_GPR_U32(ctx, 31, 0x17FC20u);
    ctx->pc = 0x17FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC18u;
    // 0x17fc1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1805B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1805B8u, 0x17FC18u, 0x17FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC20u;
label_17fc20:
    // 0x17fc20: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17fc24:
    // 0x17fc24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17fc24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17fc28: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x17fc28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x17fc2c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x17FC2Cu;
    {
        const bool branch_taken_0x17fc2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fc2c) {
            ctx->pc = 0x17FC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FC2Cu;
            // 0x17fc30: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fc00;
        }
    }
    ctx->pc = 0x17FC34u;
label_17fc34:
    // 0x17fc34: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x17fc34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_17fc38:
    // 0x17fc38: 0xdfb10188  ld          $s1, 0x188($sp)
    ctx->pc = 0x17fc38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17fc3c: 0xdfb20190  ld          $s2, 0x190($sp)
    ctx->pc = 0x17fc3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x17fc40: 0xdfb30198  ld          $s3, 0x198($sp)
    ctx->pc = 0x17fc40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x17fc44: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x17fc44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x17fc48: 0xdfb501a8  ld          $s5, 0x1A8($sp)
    ctx->pc = 0x17fc48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x17fc4c: 0xdfb601b0  ld          $s6, 0x1B0($sp)
    ctx->pc = 0x17fc4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x17fc50: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x17fc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x17fc54: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC54u;
        // 0x17fc58: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FC5Cu;
    // 0x17fc5c: 0x0  nop
    ctx->pc = 0x17fc5cu;
    // NOP
    ctx->pc = 0x17fc60u;
}
