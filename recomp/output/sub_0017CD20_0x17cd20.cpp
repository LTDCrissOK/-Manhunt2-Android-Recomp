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

// Function: sub_0017CD20
// Address: 0x17cd20 - 0x17ce78
void sub_0017CD20_0x17cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CD20_0x17cd20");
#endif

    switch (ctx->pc) {
        case 0x17cd84u: goto label_17cd84;
        case 0x17cd94u: goto label_17cd94;
        case 0x17cda4u: goto label_17cda4;
        case 0x17cdbcu: goto label_17cdbc;
        case 0x17cdc8u: goto label_17cdc8;
        case 0x17cdd4u: goto label_17cdd4;
        case 0x17cde0u: goto label_17cde0;
        case 0x17cdfcu: goto label_17cdfc;
        case 0x17ce0cu: goto label_17ce0c;
        case 0x17ce1cu: goto label_17ce1c;
        case 0x17ce28u: goto label_17ce28;
        case 0x17ce3cu: goto label_17ce3c;
        case 0x17ce54u: goto label_17ce54;
        default: break;
    }

    ctx->pc = 0x17cd20u;

    // 0x17cd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17cd24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17cd28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17cd2c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x17cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x17cd30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cd34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17cd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17cd3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17cd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17cd40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17cd44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17cd48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17cd4c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x17cd50: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x17cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x17cd54: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x17cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x17cd58: 0x1482003f  bne         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x17CD58u;
    {
        const bool branch_taken_0x17cd58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD58u;
        // 0x17cd5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd58) {
            ctx->pc = 0x17CE58u;
            goto label_17ce58;
        }
    }
    ctx->pc = 0x17CD60u;
    // 0x17cd60: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17cd64: 0x8c5300b0  lw          $s3, 0xB0($v0)
    ctx->pc = 0x17cd64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x17cd68: 0x12600038  beqz        $s3, . + 4 + (0x38 << 2)
    ctx->pc = 0x17CD68u;
    {
        const bool branch_taken_0x17cd68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD68u;
        // 0x17cd6c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd68) {
            ctx->pc = 0x17CE4Cu;
            goto label_17ce4c;
        }
    }
    ctx->pc = 0x17CD70u;
    // 0x17cd70: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x17cd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x17cd74: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17cd74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17cd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd7c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x17CD7Cu;
    SET_GPR_U32(ctx, 31, 0x17CD84u);
    ctx->pc = 0x17CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD7Cu;
    // 0x17cd80: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x17CD7Cu, 0x17CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD84u;
label_17cd84:
    // 0x17cd84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CD84u;
    {
        const bool branch_taken_0x17cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD84u;
        // 0x17cd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd84) {
            ctx->pc = 0x17CD9Cu;
            goto label_17cd9c;
        }
    }
    ctx->pc = 0x17CD8Cu;
    // 0x17cd8c: 0xc05f33e  jal         func_17CCF8
    ctx->pc = 0x17CD8Cu;
    SET_GPR_U32(ctx, 31, 0x17CD94u);
    ctx->pc = 0x17CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD8Cu;
    // 0x17cd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCF8u, 0x17CD8Cu, 0x17CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD94u;
label_17cd94:
    // 0x17cd94: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x17CD94u;
    {
        const bool branch_taken_0x17cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD94u;
        // 0x17cd98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd94) {
            ctx->pc = 0x17CE58u;
            goto label_17ce58;
        }
    }
    ctx->pc = 0x17CD9Cu;
label_17cd9c:
    // 0x17cd9c: 0xc05f194  jal         func_17C650
    ctx->pc = 0x17CD9Cu;
    SET_GPR_U32(ctx, 31, 0x17CDA4u);
    ctx->pc = 0x17CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD9Cu;
    // 0x17cda0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C650u, 0x17CD9Cu, 0x17CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDA4u;
label_17cda4:
    // 0x17cda4: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x17cda4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x17cda8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17cda8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cdb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdb4: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x17CDB4u;
    SET_GPR_U32(ctx, 31, 0x17CDBCu);
    ctx->pc = 0x17CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDB4u;
    // 0x17cdb8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x17CDB4u, 0x17CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDBCu;
label_17cdbc:
    // 0x17cdbc: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x17cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x17cdc0: 0xc046190  jal         func_118640
    ctx->pc = 0x17CDC0u;
    SET_GPR_U32(ctx, 31, 0x17CDC8u);
    ctx->pc = 0x17CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDC0u;
    // 0x17cdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x17CDC0u, 0x17CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDC8u;
label_17cdc8:
    // 0x17cdc8: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x17cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x17cdcc: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x17CDCCu;
    SET_GPR_U32(ctx, 31, 0x17CDD4u);
    ctx->pc = 0x17CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDCCu;
    // 0x17cdd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x17CDCCu, 0x17CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDD4u;
label_17cdd4:
    // 0x17cdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17cdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdd8: 0xc046058  jal         func_118160
    ctx->pc = 0x17CDD8u;
    SET_GPR_U32(ctx, 31, 0x17CDE0u);
    ctx->pc = 0x17CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDD8u;
    // 0x17cddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x17CDD8u, 0x17CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDE0u;
label_17cde0:
    // 0x17cde0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17cde4: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x17cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x17cde8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CDE8u;
    {
        const bool branch_taken_0x17cde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cde8) {
            ctx->pc = 0x17CDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDE8u;
            // 0x17cdec: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE04u;
            goto label_17ce04;
        }
    }
    ctx->pc = 0x17CDF0u;
    // 0x17cdf0: 0x8c650288  lw          $a1, 0x288($v1)
    ctx->pc = 0x17cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x17cdf4: 0xc0461e8  jal         func_1187A0
    ctx->pc = 0x17CDF4u;
    SET_GPR_U32(ctx, 31, 0x17CDFCu);
    ctx->pc = 0x17CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDF4u;
    // 0x17cdf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x17CDF4u, 0x17CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDFCu;
label_17cdfc:
    // 0x17cdfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17CDFCu;
    {
        const bool branch_taken_0x17cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDFCu;
        // 0x17ce00: 0x8e250094  lw          $a1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdfc) {
            ctx->pc = 0x17CE10u;
            goto label_17ce10;
        }
    }
    ctx->pc = 0x17CE04u;
label_17ce04:
    // 0x17ce04: 0xc0461e8  jal         func_1187A0
    ctx->pc = 0x17CE04u;
    SET_GPR_U32(ctx, 31, 0x17CE0Cu);
    ctx->pc = 0x17CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE04u;
    // 0x17ce08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x17CE04u, 0x17CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE0Cu;
label_17ce0c:
    // 0x17ce0c: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x17ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_17ce10:
    // 0x17ce10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ce10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce14: 0xc0460c4  jal         func_118310
    ctx->pc = 0x17CE14u;
    SET_GPR_U32(ctx, 31, 0x17CE1Cu);
    ctx->pc = 0x17CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE14u;
    // 0x17ce18: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x17CE14u, 0x17CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE1Cu;
label_17ce1c:
    // 0x17ce1c: 0x92250090  lbu         $a1, 0x90($s1)
    ctx->pc = 0x17ce1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x17ce20: 0xc046226  jal         func_118898
    ctx->pc = 0x17CE20u;
    SET_GPR_U32(ctx, 31, 0x17CE28u);
    ctx->pc = 0x17CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE20u;
    // 0x17ce24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x17CE20u, 0x17CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE28u;
label_17ce28:
    // 0x17ce28: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x17ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x17ce2c: 0x26a4b060  addiu       $a0, $s5, -0x4FA0
    ctx->pc = 0x17ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946912));
    // 0x17ce30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17ce30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce34: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x17CE34u;
    SET_GPR_U32(ctx, 31, 0x17CE3Cu);
    ctx->pc = 0x17CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE34u;
    // 0x17ce38: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x17CE34u, 0x17CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE3Cu;
label_17ce3c:
    // 0x17ce3c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x17ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x17ce40: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x17ce44: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x17ce44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17ce48: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x17ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_17ce4c:
    // 0x17ce4c: 0xc05f33e  jal         func_17CCF8
    ctx->pc = 0x17CE4Cu;
    SET_GPR_U32(ctx, 31, 0x17CE54u);
    ctx->pc = 0x17CE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE4Cu;
    // 0x17ce50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCF8u, 0x17CE4Cu, 0x17CE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE54u;
label_17ce54:
    // 0x17ce54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ce54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ce58:
    // 0x17ce58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ce58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ce5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ce5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ce60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ce60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ce64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ce64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ce68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ce68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ce6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17ce6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ce70: 0x3e00008  jr          $ra
    ctx->pc = 0x17CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE70u;
        // 0x17ce74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CE78u;
}
