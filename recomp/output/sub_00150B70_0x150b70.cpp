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

// Function: sub_00150B70
// Address: 0x150b70 - 0x150cd8
void sub_00150B70_0x150b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B70_0x150b70");
#endif

    switch (ctx->pc) {
        case 0x150ba0u: goto label_150ba0;
        case 0x150bacu: goto label_150bac;
        case 0x150bbcu: goto label_150bbc;
        case 0x150bc8u: goto label_150bc8;
        case 0x150becu: goto label_150bec;
        case 0x150c08u: goto label_150c08;
        case 0x150c1cu: goto label_150c1c;
        case 0x150c3cu: goto label_150c3c;
        case 0x150c50u: goto label_150c50;
        case 0x150c64u: goto label_150c64;
        case 0x150c70u: goto label_150c70;
        case 0x150c84u: goto label_150c84;
        case 0x150ca0u: goto label_150ca0;
        case 0x150cb0u: goto label_150cb0;
        default: break;
    }

    ctx->pc = 0x150b70u;

    // 0x150b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150b74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x150b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x150b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x150b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150b80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x150b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x150b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x150b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x150b8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x150b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x150b90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x150b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x150b94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x150b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x150b98: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x150B98u;
    SET_GPR_U32(ctx, 31, 0x150BA0u);
    ctx->pc = 0x150B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B98u;
    // 0x150b9c: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x150B98u, 0x150BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BA0u;
label_150ba0:
    // 0x150ba0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x150ba0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x150ba4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x150BA4u;
    SET_GPR_U32(ctx, 31, 0x150BACu);
    ctx->pc = 0x150BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BA4u;
    // 0x150ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150BA4u, 0x150BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BACu;
label_150bac:
    // 0x150bac: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x150bacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x150bb0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x150bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x150bb4: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x150BB4u;
    SET_GPR_U32(ctx, 31, 0x150BBCu);
    ctx->pc = 0x150BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BB4u;
    // 0x150bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150BB4u, 0x150BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BBCu;
label_150bbc:
    // 0x150bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bc0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x150BC0u;
    SET_GPR_U32(ctx, 31, 0x150BC8u);
    ctx->pc = 0x150BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BC0u;
    // 0x150bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x150BC0u, 0x150BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BC8u;
label_150bc8:
    // 0x150bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x150bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x150bd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150be4: 0xc04daca  jal         func_136B28
    ctx->pc = 0x150BE4u;
    SET_GPR_U32(ctx, 31, 0x150BECu);
    ctx->pc = 0x150BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BE4u;
    // 0x150be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x150BE4u, 0x150BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BECu;
label_150bec:
    // 0x150bec: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x150becu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x150bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bf4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x150bf8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150c00: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x150C00u;
    SET_GPR_U32(ctx, 31, 0x150C08u);
    ctx->pc = 0x150C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C00u;
    // 0x150c04: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x150C00u, 0x150C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C08u;
label_150c08:
    // 0x150c08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x150c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x150c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c14: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x150C14u;
    SET_GPR_U32(ctx, 31, 0x150C1Cu);
    ctx->pc = 0x150C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C14u;
    // 0x150c18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x150C14u, 0x150C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C1Cu;
label_150c1c:
    // 0x150c1c: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x150c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x150c20: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x150c24: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x150c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x150c28: 0x24559a08  addiu       $s5, $v0, -0x65F8
    ctx->pc = 0x150c28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150c2c: 0x26b0020c  addiu       $s0, $s5, 0x20C
    ctx->pc = 0x150c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 524));
    // 0x150c30: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x150c34: 0xc043c56  jal         func_10F158
    ctx->pc = 0x150C34u;
    SET_GPR_U32(ctx, 31, 0x150C3Cu);
    ctx->pc = 0x150C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C34u;
    // 0x150c38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x150C34u, 0x150C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C3Cu;
label_150c3c:
    // 0x150c3c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x150c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150c40: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x150C40u;
    {
        const bool branch_taken_0x150c40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C40u;
        // 0x150c44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c40) {
            ctx->pc = 0x150C64u;
            goto label_150c64;
        }
    }
    ctx->pc = 0x150C48u;
    // 0x150c48: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x150C48u;
    SET_GPR_U32(ctx, 31, 0x150C50u);
    ctx->pc = 0x150C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C48u;
    // 0x150c4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x150C48u, 0x150C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C50u;
label_150c50:
    // 0x150c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x150c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150c5c: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x150C5Cu;
    SET_GPR_U32(ctx, 31, 0x150C64u);
    ctx->pc = 0x150C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C5Cu;
    // 0x150c60: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x150C5Cu, 0x150C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C64u;
label_150c64:
    // 0x150c64: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x150c64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x150c68: 0xc053bd0  jal         func_14EF40
    ctx->pc = 0x150C68u;
    SET_GPR_U32(ctx, 31, 0x150C70u);
    ctx->pc = 0x150C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C68u;
    // 0x150c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF40u, 0x150C68u, 0x150C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C70u;
label_150c70:
    // 0x150c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c74: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x150c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x150c78: 0x9085046c  lbu         $a1, 0x46C($a0)
    ctx->pc = 0x150c78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x150c7c: 0xc04da3e  jal         func_1368F8
    ctx->pc = 0x150C7Cu;
    SET_GPR_U32(ctx, 31, 0x150C84u);
    ctx->pc = 0x150C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C7Cu;
    // 0x150c80: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1368F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F8u, 0x150C7Cu, 0x150C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C84u;
label_150c84:
    // 0x150c84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c88: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x150c8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x150c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x150c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c94: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x150c98: 0xc04668a  jal         func_119A28
    ctx->pc = 0x150C98u;
    SET_GPR_U32(ctx, 31, 0x150CA0u);
    ctx->pc = 0x150C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C98u;
    // 0x150c9c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x150C98u, 0x150CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CA0u;
label_150ca0:
    // 0x150ca0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x150ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ca4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ca8: 0xc04445e  jal         func_111178
    ctx->pc = 0x150CA8u;
    SET_GPR_U32(ctx, 31, 0x150CB0u);
    ctx->pc = 0x150CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CA8u;
    // 0x150cac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x150CA8u, 0x150CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CB0u;
label_150cb0:
    // 0x150cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x150cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x150cb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x150cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150cbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x150cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x150cc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x150cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150cc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x150cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x150cc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x150cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x150CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CCCu;
        // 0x150cd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150CD4u;
    // 0x150cd4: 0x0  nop
    ctx->pc = 0x150cd4u;
    // NOP
    ctx->pc = 0x150cd8u;
}
