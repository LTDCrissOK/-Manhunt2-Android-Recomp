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

// Function: sub_00121110
// Address: 0x121110 - 0x121228
void sub_00121110_0x121110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121110_0x121110");
#endif

    switch (ctx->pc) {
        case 0x12113cu: goto label_12113c;
        case 0x121150u: goto label_121150;
        case 0x12115cu: goto label_12115c;
        case 0x121178u: goto label_121178;
        case 0x121190u: goto label_121190;
        case 0x1211a8u: goto label_1211a8;
        case 0x1211c4u: goto label_1211c4;
        case 0x1211d8u: goto label_1211d8;
        case 0x1211e0u: goto label_1211e0;
        default: break;
    }

    ctx->pc = 0x121110u;

    // 0x121110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x121110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x121114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12111c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12111cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121120: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121124: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x121124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x121128: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x121128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12112c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x121130: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x121130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x121134: 0xc042496  jal         func_109258
    ctx->pc = 0x121134u;
    SET_GPR_U32(ctx, 31, 0x12113Cu);
    ctx->pc = 0x121138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121134u;
    // 0x121138: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109258u, 0x121134u, 0x12113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12113Cu;
label_12113c:
    // 0x12113c: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x12113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x121140: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121140u;
    {
        const bool branch_taken_0x121140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121140) {
            ctx->pc = 0x121144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121140u;
            // 0x121144: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121154u;
            goto label_121154;
        }
    }
    ctx->pc = 0x121148u;
    // 0x121148: 0xc042472  jal         func_1091C8
    ctx->pc = 0x121148u;
    SET_GPR_U32(ctx, 31, 0x121150u);
    ctx->pc = 0x12114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121148u;
    // 0x12114c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1091C8u, 0x121148u, 0x121150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121150u;
label_121150:
    // 0x121150: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x121150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_121154:
    // 0x121154: 0xc04991e  jal         func_126478
    ctx->pc = 0x121154u;
    SET_GPR_U32(ctx, 31, 0x12115Cu);
    ctx->pc = 0x121158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121154u;
    // 0x121158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126478u, 0x121154u, 0x12115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12115Cu;
label_12115c:
    // 0x12115c: 0x8e450304  lw          $a1, 0x304($s2)
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x121160: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x121160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x121164: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121164u;
    {
        const bool branch_taken_0x121164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x121168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121164u;
        // 0x121168: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121164) {
            ctx->pc = 0x12117Cu;
            goto label_12117c;
        }
    }
    ctx->pc = 0x12116Cu;
    // 0x12116c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x121170: 0xc047826  jal         func_11E098
    ctx->pc = 0x121170u;
    SET_GPR_U32(ctx, 31, 0x121178u);
    ctx->pc = 0x121174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121170u;
    // 0x121174: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E098u, 0x121170u, 0x121178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121178u;
label_121178:
    // 0x121178: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x121178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12117c:
    // 0x12117c: 0x26530324  addiu       $s3, $s2, 0x324
    ctx->pc = 0x12117cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 804));
    // 0x121180: 0x26500f94  addiu       $s0, $s2, 0xF94
    ctx->pc = 0x121180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3988));
    // 0x121184: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x121184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x121188: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x121188u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x12118c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x12118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_121190:
    // 0x121190: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x121190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x121194: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x121194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121198: 0x10b50004  beq         $a1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x121198u;
    {
        const bool branch_taken_0x121198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        ctx->pc = 0x12119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121198u;
        // 0x12119c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121198) {
            ctx->pc = 0x1211ACu;
            goto label_1211ac;
        }
    }
    ctx->pc = 0x1211A0u;
    // 0x1211a0: 0xc047826  jal         func_11E098
    ctx->pc = 0x1211A0u;
    SET_GPR_U32(ctx, 31, 0x1211A8u);
    ctx->pc = 0x1211A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211A0u;
    // 0x1211a4: 0x26849a08  addiu       $a0, $s4, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E098u, 0x1211A0u, 0x1211A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211A8u;
label_1211a8:
    // 0x1211a8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1211a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1211ac:
    // 0x1211ac: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1211acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1211b0: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x1211b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1211b4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1211B4u;
    {
        const bool branch_taken_0x1211b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1211B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211B4u;
        // 0x1211b8: 0x111140  sll         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211b4) {
            ctx->pc = 0x121190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121190;
        }
    }
    ctx->pc = 0x1211BCu;
    // 0x1211bc: 0xc049a1a  jal         func_126868
    ctx->pc = 0x1211BCu;
    SET_GPR_U32(ctx, 31, 0x1211C4u);
    ctx->pc = 0x1211C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211BCu;
    // 0x1211c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126868u, 0x1211BCu, 0x1211C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211C4u;
label_1211c4:
    // 0x1211c4: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x1211c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x1211c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1211c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1211cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1211CCu;
    {
        const bool branch_taken_0x1211cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211CCu;
        // 0x1211d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211cc) {
            ctx->pc = 0x1211F0u;
            goto label_1211f0;
        }
    }
    ctx->pc = 0x1211D4u;
    // 0x1211d4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1211d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1211d8:
    // 0x1211d8: 0xc0f6ec0  jal         func_3DBB00
    ctx->pc = 0x1211D8u;
    SET_GPR_U32(ctx, 31, 0x1211E0u);
    ctx->pc = 0x1211DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211D8u;
    // 0x1211dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x1211D8u, 0x1211E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211E0u;
label_1211e0:
    // 0x1211e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1211e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1211e4: 0x0  nop
    ctx->pc = 0x1211e4u;
    // NOP
    // 0x1211e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1211E8u;
    {
        const bool branch_taken_0x1211e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1211e8) {
            ctx->pc = 0x1211ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211E8u;
            // 0x1211ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1211D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1211d8;
        }
    }
    ctx->pc = 0x1211F0u;
label_1211f0:
    // 0x1211f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1211f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1211f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1211f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1211f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1211f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1211fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1211fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x121200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121208: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12120c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12120cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121210: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x121210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121214: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x121214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121218: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x121218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12121c: 0x3e00008  jr          $ra
    ctx->pc = 0x12121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12121Cu;
        // 0x121220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12121Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121224u;
    // 0x121224: 0x0  nop
    ctx->pc = 0x121224u;
    // NOP
    ctx->pc = 0x121228u;
}
