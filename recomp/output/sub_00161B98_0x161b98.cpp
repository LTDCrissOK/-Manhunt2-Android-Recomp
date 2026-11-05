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

// Function: sub_00161B98
// Address: 0x161b98 - 0x161ca8
void sub_00161B98_0x161b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161B98_0x161b98");
#endif

    switch (ctx->pc) {
        case 0x161bccu: goto label_161bcc;
        case 0x161be0u: goto label_161be0;
        case 0x161bf0u: goto label_161bf0;
        case 0x161c28u: goto label_161c28;
        case 0x161c3cu: goto label_161c3c;
        case 0x161c4cu: goto label_161c4c;
        case 0x161c5cu: goto label_161c5c;
        case 0x161c80u: goto label_161c80;
        case 0x161c90u: goto label_161c90;
        default: break;
    }

    ctx->pc = 0x161b98u;

    // 0x161b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161b9c: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x161b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x161ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161ba4: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x161ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x161ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161bb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bb4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x161bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x161bb8: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x161bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x161bbc: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x161bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x161bc0: 0x8e2602e0  lw          $a2, 0x2E0($s1)
    ctx->pc = 0x161bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x161bc4: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x161BC4u;
    SET_GPR_U32(ctx, 31, 0x161BCCu);
    ctx->pc = 0x161BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161BC4u;
    // 0x161bc8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x161BC4u, 0x161BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BCCu;
label_161bcc:
    // 0x161bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bd0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161BD0u;
    {
        const bool branch_taken_0x161bd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x161BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BD0u;
        // 0x161bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bd0) {
            ctx->pc = 0x161BE8u;
            goto label_161be8;
        }
    }
    ctx->pc = 0x161BD8u;
    // 0x161bd8: 0xc04f098  jal         func_13C260
    ctx->pc = 0x161BD8u;
    SET_GPR_U32(ctx, 31, 0x161BE0u);
    ctx->pc = 0x161BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161BD8u;
    // 0x161bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x161BD8u, 0x161BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BE0u;
label_161be0:
    // 0x161be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161be8:
    // 0x161be8: 0xc058b5e  jal         func_162D78
    ctx->pc = 0x161BE8u;
    SET_GPR_U32(ctx, 31, 0x161BF0u);
    ctx->pc = 0x161BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161BE8u;
    // 0x161bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D78u, 0x161BE8u, 0x161BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BF0u;
label_161bf0:
    // 0x161bf0: 0x8e230354  lw          $v1, 0x354($s1)
    ctx->pc = 0x161bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 852)));
    // 0x161bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161bf8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x161BF8u;
    {
        const bool branch_taken_0x161bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BF8u;
        // 0x161bfc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bf8) {
            ctx->pc = 0x161C30u;
            goto label_161c30;
        }
    }
    ctx->pc = 0x161C00u;
    // 0x161c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161C00u;
    {
        const bool branch_taken_0x161c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C00u;
        // 0x161c04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c00) {
            ctx->pc = 0x161C18u;
            goto label_161c18;
        }
    }
    ctx->pc = 0x161C08u;
    // 0x161c08: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x161C08u;
    {
        const bool branch_taken_0x161c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C08u;
        // 0x161c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c08) {
            ctx->pc = 0x161C44u;
            goto label_161c44;
        }
    }
    ctx->pc = 0x161C10u;
    // 0x161c10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x161C10u;
    {
        const bool branch_taken_0x161c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c10) {
            ctx->pc = 0x161C54u;
            goto label_161c54;
        }
    }
    ctx->pc = 0x161C18u;
label_161c18:
    // 0x161c18: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x161C18u;
    {
        const bool branch_taken_0x161c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x161C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C18u;
        // 0x161c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c18) {
            ctx->pc = 0x161C54u;
            goto label_161c54;
        }
    }
    ctx->pc = 0x161C20u;
    // 0x161c20: 0xc05893a  jal         func_1624E8
    ctx->pc = 0x161C20u;
    SET_GPR_U32(ctx, 31, 0x161C28u);
    ctx->pc = 0x161C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C20u;
    // 0x161c24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1624E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1624E8u, 0x161C20u, 0x161C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C28u;
label_161c28:
    // 0x161c28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x161C28u;
    {
        const bool branch_taken_0x161c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C28u;
        // 0x161c2c: 0x8e220350  lw          $v0, 0x350($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c28) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161C30u;
label_161c30:
    // 0x161c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c34: 0xc05895c  jal         func_162570
    ctx->pc = 0x161C34u;
    SET_GPR_U32(ctx, 31, 0x161C3Cu);
    ctx->pc = 0x161C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C34u;
    // 0x161c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162570u, 0x161C34u, 0x161C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C3Cu;
label_161c3c:
    // 0x161c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x161C3Cu;
    {
        const bool branch_taken_0x161c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C3Cu;
        // 0x161c40: 0x8e220350  lw          $v0, 0x350($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c3c) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161C44u;
label_161c44:
    // 0x161c44: 0xc05899c  jal         func_162670
    ctx->pc = 0x161C44u;
    SET_GPR_U32(ctx, 31, 0x161C4Cu);
    ctx->pc = 0x161C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C44u;
    // 0x161c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162670u, 0x161C44u, 0x161C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C4Cu;
label_161c4c:
    // 0x161c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161C4Cu;
    {
        const bool branch_taken_0x161c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C4Cu;
        // 0x161c50: 0x8e220350  lw          $v0, 0x350($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c4c) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161C54u;
label_161c54:
    // 0x161c54: 0xc058a1c  jal         func_162870
    ctx->pc = 0x161C54u;
    SET_GPR_U32(ctx, 31, 0x161C5Cu);
    ctx->pc = 0x161C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C54u;
    // 0x161c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162870u, 0x161C54u, 0x161C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C5Cu;
label_161c5c:
    // 0x161c5c: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x161c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_161c60:
    // 0x161c60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161C60u;
    {
        const bool branch_taken_0x161c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c60) {
            ctx->pc = 0x161C78u;
            goto label_161c78;
        }
    }
    ctx->pc = 0x161C68u;
    // 0x161c68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x161c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161c6c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x161c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x161c70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x161c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x161c74: 0xae220350  sw          $v0, 0x350($s1)
    ctx->pc = 0x161c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 2));
label_161c78:
    // 0x161c78: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x161C78u;
    SET_GPR_U32(ctx, 31, 0x161C80u);
    ctx->pc = 0x161C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C78u;
    // 0x161c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x161C78u, 0x161C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C80u;
label_161c80:
    // 0x161c80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x161c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x161c84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c88: 0xc042128  jal         func_1084A0
    ctx->pc = 0x161C88u;
    SET_GPR_U32(ctx, 31, 0x161C90u);
    ctx->pc = 0x161C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C88u;
    // 0x161c8c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x161C88u, 0x161C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C90u;
label_161c90:
    // 0x161c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x161C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C9Cu;
        // 0x161ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CA4u;
    // 0x161ca4: 0x0  nop
    ctx->pc = 0x161ca4u;
    // NOP
    ctx->pc = 0x161ca8u;
}
