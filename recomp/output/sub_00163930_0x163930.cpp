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

// Function: sub_00163930
// Address: 0x163930 - 0x163a48
void sub_00163930_0x163930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163930_0x163930");
#endif

    switch (ctx->pc) {
        case 0x163980u: goto label_163980;
        case 0x1639a4u: goto label_1639a4;
        case 0x1639b8u: goto label_1639b8;
        case 0x1639ecu: goto label_1639ec;
        case 0x163a04u: goto label_163a04;
        default: break;
    }

    ctx->pc = 0x163930u;

    // 0x163930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x163934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x163938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16393c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x163940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x163944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x163944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x163948: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x163948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16394c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x163950: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x163954: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x163954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x163958: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x163958u;
    {
        const bool branch_taken_0x163958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163958) {
            ctx->pc = 0x16395Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163958u;
            // 0x16395c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163A28u;
            goto label_163a28;
        }
    }
    ctx->pc = 0x163960u;
    // 0x163960: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x163960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x163964: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x163964u;
    {
        const bool branch_taken_0x163964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163964u;
        // 0x163968: 0xae000338  sw          $zero, 0x338($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163964) {
            ctx->pc = 0x163A24u;
            goto label_163a24;
        }
    }
    ctx->pc = 0x16396Cu;
    // 0x16396c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16396cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163970: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x163970u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x163974: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x163974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163978: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x163978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16397c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_163980:
    // 0x163980: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x163980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x163984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163988: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x163988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16398c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16398Cu;
    {
        const bool branch_taken_0x16398c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x163990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16398Cu;
        // 0x163990: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16398c) {
            ctx->pc = 0x163A04u;
            goto label_163a04;
        }
    }
    ctx->pc = 0x163994u;
    // 0x163994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163998: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x163998u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16399c: 0xc04f112  jal         func_13C448
    ctx->pc = 0x16399Cu;
    SET_GPR_U32(ctx, 31, 0x1639A4u);
    ctx->pc = 0x1639A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16399Cu;
    // 0x1639a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x16399Cu, 0x1639A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639A4u;
label_1639a4:
    // 0x1639a4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1639A4u;
    {
        const bool branch_taken_0x1639a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639A4u;
        // 0x1639a8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639a4) {
            ctx->pc = 0x163A08u;
            goto label_163a08;
        }
    }
    ctx->pc = 0x1639ACu;
    // 0x1639ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1639acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639b0: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x1639B0u;
    SET_GPR_U32(ctx, 31, 0x1639B8u);
    ctx->pc = 0x1639B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639B0u;
    // 0x1639b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x1639B0u, 0x1639B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639B8u;
label_1639b8:
    // 0x1639b8: 0x10550005  beq         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1639B8u;
    {
        const bool branch_taken_0x1639b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1639BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639B8u;
        // 0x1639bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639b8) {
            ctx->pc = 0x1639D0u;
            goto label_1639d0;
        }
    }
    ctx->pc = 0x1639C0u;
    // 0x1639c0: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1639C0u;
    {
        const bool branch_taken_0x1639c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1639C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C0u;
        // 0x1639c4: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639c0) {
            ctx->pc = 0x1639D4u;
            goto label_1639d4;
        }
    }
    ctx->pc = 0x1639C8u;
    // 0x1639c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1639C8u;
    {
        const bool branch_taken_0x1639c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C8u;
        // 0x1639cc: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639c8) {
            ctx->pc = 0x163A0Cu;
            goto label_163a0c;
        }
    }
    ctx->pc = 0x1639D0u;
label_1639d0:
    // 0x1639d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1639d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1639d4:
    // 0x1639d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1639D4u;
    {
        const bool branch_taken_0x1639d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639D4u;
        // 0x1639d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639d4) {
            ctx->pc = 0x1639F4u;
            goto label_1639f4;
        }
    }
    ctx->pc = 0x1639DCu;
    // 0x1639dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1639dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639e0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1639e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1639e4: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x1639E4u;
    SET_GPR_U32(ctx, 31, 0x1639ECu);
    ctx->pc = 0x1639E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639E4u;
    // 0x1639e8: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x1639E4u, 0x1639ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639ECu;
label_1639ec:
    // 0x1639ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1639ECu;
    {
        const bool branch_taken_0x1639ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639ECu;
        // 0x1639f0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639ec) {
            ctx->pc = 0x163A08u;
            goto label_163a08;
        }
    }
    ctx->pc = 0x1639F4u;
label_1639f4:
    // 0x1639f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1639f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639f8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1639f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1639fc: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x1639FCu;
    SET_GPR_U32(ctx, 31, 0x163A04u);
    ctx->pc = 0x163A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639FCu;
    // 0x163a00: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x1639FCu, 0x163A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A04u;
label_163a04:
    // 0x163a04: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x163a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_163a08:
    // 0x163a08: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_163a0c:
    // 0x163a0c: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x163a0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x163a10: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x163A10u;
    {
        const bool branch_taken_0x163a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a10) {
            ctx->pc = 0x163A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163A10u;
            // 0x163a14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163A28u;
            goto label_163a28;
        }
    }
    ctx->pc = 0x163A18u;
    // 0x163a18: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x163a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x163a1c: 0x5662ffd8  bnel        $s3, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x163A1Cu;
    {
        const bool branch_taken_0x163a1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x163a1c) {
            ctx->pc = 0x163A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163A1Cu;
            // 0x163a20: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163980;
        }
    }
    ctx->pc = 0x163A24u;
label_163a24:
    // 0x163a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163a28:
    // 0x163a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163a2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x163a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x163a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163a34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x163a34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163a38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x163a38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x163a3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163a40: 0x3e00008  jr          $ra
    ctx->pc = 0x163A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A40u;
        // 0x163a44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163A48u;
}
