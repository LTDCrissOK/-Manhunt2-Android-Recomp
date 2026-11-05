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

// Function: sub_00174988
// Address: 0x174988 - 0x174ac8
void sub_00174988_0x174988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174988_0x174988");
#endif

    switch (ctx->pc) {
        case 0x1749f4u: goto label_1749f4;
        case 0x174a0cu: goto label_174a0c;
        case 0x174a24u: goto label_174a24;
        case 0x174a60u: goto label_174a60;
        case 0x174a7cu: goto label_174a7c;
        case 0x174a94u: goto label_174a94;
        case 0x174a9cu: goto label_174a9c;
        case 0x174ab0u: goto label_174ab0;
        default: break;
    }

    ctx->pc = 0x174988u;

    // 0x174988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17498c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17498cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x174994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17499c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1749a0: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1749a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1749a4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1749A4u;
    {
        const bool branch_taken_0x1749a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749A4u;
        // 0x1749a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749a4) {
            ctx->pc = 0x174A2Cu;
            goto label_174a2c;
        }
    }
    ctx->pc = 0x1749ACu;
    // 0x1749ac: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1749acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1749b0: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x1749b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1749b4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1749b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1749b8: 0x8e4600c0  lw          $a2, 0xC0($s2)
    ctx->pc = 0x1749b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1749bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1749bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1749c0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1749C0u;
    {
        const bool branch_taken_0x1749c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749C0u;
        // 0x1749c4: 0x83280b  movn        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749c0) {
            ctx->pc = 0x1749D4u;
            goto label_1749d4;
        }
    }
    ctx->pc = 0x1749C8u;
    // 0x1749c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1749cc: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1749CCu;
    {
        const bool branch_taken_0x1749cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1749cc) {
            ctx->pc = 0x1749D8u;
            goto label_1749d8;
        }
    }
    ctx->pc = 0x1749D4u;
label_1749d4:
    // 0x1749d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1749d8:
    // 0x1749d8: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1749D8u;
    {
        const bool branch_taken_0x1749d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749D8u;
        // 0x1749dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749d8) {
            ctx->pc = 0x174AB4u;
            goto label_174ab4;
        }
    }
    ctx->pc = 0x1749E0u;
    // 0x1749e0: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x1749e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x1749e4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1749e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1749e8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1749e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1749ec: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1749ECu;
    SET_GPR_U32(ctx, 31, 0x1749F4u);
    ctx->pc = 0x1749F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749ECu;
    // 0x1749f0: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1749ECu, 0x1749F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749F4u;
label_1749f4:
    // 0x1749f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1749f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1749f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1749fc: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1749fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x174a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a04: 0xc04af16  jal         func_12BC58
    ctx->pc = 0x174A04u;
    SET_GPR_U32(ctx, 31, 0x174A0Cu);
    ctx->pc = 0x174A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A04u;
    // 0x174a08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC58u, 0x174A04u, 0x174A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A0Cu;
label_174a0c:
    // 0x174a0c: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x174a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x174a10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x174a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a14: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x174a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x174a18: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x174a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x174a1c: 0xc04448e  jal         func_111238
    ctx->pc = 0x174A1Cu;
    SET_GPR_U32(ctx, 31, 0x174A24u);
    ctx->pc = 0x174A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A1Cu;
    // 0x174a20: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111238u, 0x174A1Cu, 0x174A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A24u;
label_174a24:
    // 0x174a24: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x174A24u;
    {
        const bool branch_taken_0x174a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A24u;
        // 0x174a28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a24) {
            ctx->pc = 0x174AB4u;
            goto label_174ab4;
        }
    }
    ctx->pc = 0x174A2Cu;
label_174a2c:
    // 0x174a2c: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x174a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x174a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a34: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x174A34u;
    {
        const bool branch_taken_0x174a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A34u;
        // 0x174a38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a34) {
            ctx->pc = 0x174AB4u;
            goto label_174ab4;
        }
    }
    ctx->pc = 0x174A3Cu;
    // 0x174a3c: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x174a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x174a40: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x174A40u;
    {
        const bool branch_taken_0x174a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A40u;
        // 0x174a44: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a40) {
            ctx->pc = 0x174AB8u;
            goto label_174ab8;
        }
    }
    ctx->pc = 0x174A48u;
    // 0x174a48: 0x8e5000c0  lw          $s0, 0xC0($s2)
    ctx->pc = 0x174a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x174a4c: 0x5603001a  bnel        $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x174A4Cu;
    {
        const bool branch_taken_0x174a4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x174a4c) {
            ctx->pc = 0x174A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174A4Cu;
            // 0x174a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174AB8u;
            goto label_174ab8;
        }
    }
    ctx->pc = 0x174A54u;
    // 0x174a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a58: 0xc05d2b2  jal         func_174AC8
    ctx->pc = 0x174A58u;
    SET_GPR_U32(ctx, 31, 0x174A60u);
    ctx->pc = 0x174A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A58u;
    // 0x174a5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174AC8u, 0x174A58u, 0x174A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A60u;
label_174a60:
    // 0x174a60: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x174A60u;
    {
        const bool branch_taken_0x174a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a60) {
            ctx->pc = 0x174A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174A60u;
            // 0x174a64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174AB4u;
            goto label_174ab4;
        }
    }
    ctx->pc = 0x174A68u;
    // 0x174a68: 0xae5000c4  sw          $s0, 0xC4($s2)
    ctx->pc = 0x174a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 16));
    // 0x174a6c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x174a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x174a70: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x174a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x174a74: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174A74u;
    SET_GPR_U32(ctx, 31, 0x174A7Cu);
    ctx->pc = 0x174A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A74u;
    // 0x174a78: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174A74u, 0x174A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A7Cu;
label_174a7c:
    // 0x174a7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x174a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x174a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x174a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a8c: 0xc04aefe  jal         func_12BBF8
    ctx->pc = 0x174A8Cu;
    SET_GPR_U32(ctx, 31, 0x174A94u);
    ctx->pc = 0x174A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A8Cu;
    // 0x174a90: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BBF8u, 0x174A8Cu, 0x174A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A94u;
label_174a94:
    // 0x174a94: 0xc05d330  jal         func_174CC0
    ctx->pc = 0x174A94u;
    SET_GPR_U32(ctx, 31, 0x174A9Cu);
    ctx->pc = 0x174A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A94u;
    // 0x174a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CC0u, 0x174A94u, 0x174A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A9Cu;
label_174a9c:
    // 0x174a9c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x174a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x174aa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174aa4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x174aa8: 0xc044484  jal         func_111210
    ctx->pc = 0x174AA8u;
    SET_GPR_U32(ctx, 31, 0x174AB0u);
    ctx->pc = 0x174AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AA8u;
    // 0x174aac: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111210u, 0x174AA8u, 0x174AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AB0u;
label_174ab0:
    // 0x174ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174ab4:
    // 0x174ab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174ab8:
    // 0x174ab8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174abc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x174AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AC0u;
        // 0x174ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174AC8u;
}
