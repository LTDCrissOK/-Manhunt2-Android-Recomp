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

// Function: sub_00241B40
// Address: 0x241b40 - 0x241ce8
void sub_00241B40_0x241b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241B40_0x241b40");
#endif

    switch (ctx->pc) {
        case 0x241b6cu: goto label_241b6c;
        case 0x241b78u: goto label_241b78;
        case 0x241b88u: goto label_241b88;
        case 0x241c2cu: goto label_241c2c;
        case 0x241c40u: goto label_241c40;
        case 0x241c4cu: goto label_241c4c;
        case 0x241c88u: goto label_241c88;
        case 0x241ca8u: goto label_241ca8;
        case 0x241cb8u: goto label_241cb8;
        case 0x241cc4u: goto label_241cc4;
        default: break;
    }

    ctx->pc = 0x241b40u;

    // 0x241b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x241b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241b4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x241b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x241b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241b58: 0x8e11010c  lw          $s1, 0x10C($s0)
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x241b5c: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x241b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x241b60: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x241b64: 0xc08dc16  jal         func_237058
    ctx->pc = 0x241B64u;
    SET_GPR_U32(ctx, 31, 0x241B6Cu);
    ctx->pc = 0x241B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B64u;
    // 0x241b68: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x241B64u, 0x241B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B6Cu;
label_241b6c:
    // 0x241b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b70: 0xc08e40c  jal         func_239030
    ctx->pc = 0x241B70u;
    SET_GPR_U32(ctx, 31, 0x241B78u);
    ctx->pc = 0x241B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B70u;
    // 0x241b74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239030u, 0x241B70u, 0x241B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B78u;
label_241b78:
    // 0x241b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b80: 0xc091d94  jal         func_247650
    ctx->pc = 0x241B80u;
    SET_GPR_U32(ctx, 31, 0x241B88u);
    ctx->pc = 0x241B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B80u;
    // 0x241b84: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247650u, 0x241B80u, 0x241B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B88u;
label_241b88:
    // 0x241b88: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x241b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x241b8c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x241b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x241b90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241b98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x241b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241b9c: 0x2462fa96  addiu       $v0, $v1, -0x56A
    ctx->pc = 0x241b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965910));
    // 0x241ba0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x241ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x241ba4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x241BA4u;
    {
        const bool branch_taken_0x241ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241ba4) {
            ctx->pc = 0x241BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241BA4u;
            // 0x241ba8: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241BC4u;
            goto label_241bc4;
        }
    }
    ctx->pc = 0x241BACu;
    // 0x241bac: 0x2402056f  addiu       $v0, $zero, 0x56F
    ctx->pc = 0x241bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1391));
    // 0x241bb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241BB0u;
    {
        const bool branch_taken_0x241bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BB0u;
        // 0x241bb4: 0x2402056e  addiu       $v0, $zero, 0x56E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bb0) {
            ctx->pc = 0x241BC0u;
            goto label_241bc0;
        }
    }
    ctx->pc = 0x241BB8u;
    // 0x241bb8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241BB8u;
    {
        const bool branch_taken_0x241bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241bb8) {
            ctx->pc = 0x241BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241BB8u;
            // 0x241bbc: 0xc601037c  lwc1        $f1, 0x37C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x241BCCu;
            goto label_241bcc;
        }
    }
    ctx->pc = 0x241BC0u;
label_241bc0:
    // 0x241bc0: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x241bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_241bc4:
    // 0x241bc4: 0xa04001a5  sb          $zero, 0x1A5($v0)
    ctx->pc = 0x241bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 421), (uint8_t)GPR_U32(ctx, 0));
    // 0x241bc8: 0xc601037c  lwc1        $f1, 0x37C($s0)
    ctx->pc = 0x241bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241bcc:
    // 0x241bcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241bd0: 0x0  nop
    ctx->pc = 0x241bd0u;
    // NOP
    // 0x241bd4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x241bd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241bd8: 0x0  nop
    ctx->pc = 0x241bd8u;
    // NOP
    // 0x241bdc: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x241BDCu;
    {
        const bool branch_taken_0x241bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241bdc) {
            ctx->pc = 0x241BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241BDCu;
            // 0x241be0: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C0Cu;
            goto label_241c0c;
        }
    }
    ctx->pc = 0x241BE4u;
    // 0x241be4: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x241be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x241be8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x241bec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241bf0: 0xc440139c  lwc1        $f0, 0x139C($v0)
    ctx->pc = 0x241bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241bf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x241bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241bf8: 0x0  nop
    ctx->pc = 0x241bf8u;
    // NOP
    // 0x241bfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x241BFCu;
    {
        const bool branch_taken_0x241bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BFCu;
        // 0x241c00: 0xe600037c  swc1        $f0, 0x37C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bfc) {
            ctx->pc = 0x241C08u;
            goto label_241c08;
        }
    }
    ctx->pc = 0x241C04u;
    // 0x241c04: 0xe601037c  swc1        $f1, 0x37C($s0)
    ctx->pc = 0x241c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
label_241c08:
    // 0x241c08: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_241c0c:
    // 0x241c0c: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x241c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x241c10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x241C10u;
    {
        const bool branch_taken_0x241c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241c10) {
            ctx->pc = 0x241C24u;
            goto label_241c24;
        }
    }
    ctx->pc = 0x241C18u;
    // 0x241c18: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x241c1c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x241C1Cu;
    {
        const bool branch_taken_0x241c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241c1c) {
            ctx->pc = 0x241C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C1Cu;
            // 0x241c20: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C38u;
            goto label_241c38;
        }
    }
    ctx->pc = 0x241C24u;
label_241c24:
    // 0x241c24: 0xc08fe68  jal         func_23F9A0
    ctx->pc = 0x241C24u;
    SET_GPR_U32(ctx, 31, 0x241C2Cu);
    ctx->pc = 0x241C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C24u;
    // 0x241c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F9A0u, 0x241C24u, 0x241C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C2Cu;
label_241c2c:
    // 0x241c2c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x241C2Cu;
    {
        const bool branch_taken_0x241c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241c2c) {
            ctx->pc = 0x241C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C2Cu;
            // 0x241c30: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C50u;
            goto label_241c50;
        }
    }
    ctx->pc = 0x241C34u;
    // 0x241c34: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x241c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_241c38:
    // 0x241c38: 0xc069b4e  jal         func_1A6D38
    ctx->pc = 0x241C38u;
    SET_GPR_U32(ctx, 31, 0x241C40u);
    ctx->pc = 0x241C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C38u;
    // 0x241c3c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D38u, 0x241C38u, 0x241C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C40u;
label_241c40:
    // 0x241c40: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x241c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x241c44: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x241C44u;
    SET_GPR_U32(ctx, 31, 0x241C4Cu);
    ctx->pc = 0x241C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C44u;
    // 0x241c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x241C44u, 0x241C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C4Cu;
label_241c4c:
    // 0x241c4c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_241c50:
    // 0x241c50: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x241c54: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x241C54u;
    {
        const bool branch_taken_0x241c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241c54) {
            ctx->pc = 0x241C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C54u;
            // 0x241c58: 0x8e03010c  lw          $v1, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C8Cu;
            goto label_241c8c;
        }
    }
    ctx->pc = 0x241C5Cu;
    // 0x241c5c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x241c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241c60: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x241c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x241c64: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x241c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x241c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241c6c: 0x0  nop
    ctx->pc = 0x241c6cu;
    // NOP
    // 0x241c70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x241c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241c74: 0x0  nop
    ctx->pc = 0x241c74u;
    // NOP
    // 0x241c78: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x241C78u;
    {
        const bool branch_taken_0x241c78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241c78) {
            ctx->pc = 0x241C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C78u;
            // 0x241c7c: 0x8e03010c  lw          $v1, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C8Cu;
            goto label_241c8c;
        }
    }
    ctx->pc = 0x241C80u;
    // 0x241c80: 0xc08dbbc  jal         func_236EF0
    ctx->pc = 0x241C80u;
    SET_GPR_U32(ctx, 31, 0x241C88u);
    ctx->pc = 0x241C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C80u;
    // 0x241c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EF0u, 0x241C80u, 0x241C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C88u;
label_241c88:
    // 0x241c88: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x241c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_241c8c:
    // 0x241c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c90: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x241c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x241c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x241c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241c98: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x241c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x241c9c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x241c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x241ca0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x241CA0u;
    SET_GPR_U32(ctx, 31, 0x241CA8u);
    ctx->pc = 0x241CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CA0u;
    // 0x241ca4: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x241CA0u, 0x241CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CA8u;
label_241ca8:
    // 0x241ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241cac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x241cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241cb0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x241CB0u;
    SET_GPR_U32(ctx, 31, 0x241CB8u);
    ctx->pc = 0x241CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CB0u;
    // 0x241cb4: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x241CB0u, 0x241CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CB8u;
label_241cb8:
    // 0x241cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241cbc: 0xc08a15a  jal         func_228568
    ctx->pc = 0x241CBCu;
    SET_GPR_U32(ctx, 31, 0x241CC4u);
    ctx->pc = 0x241CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CBCu;
    // 0x241cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x241CBCu, 0x241CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CC4u;
label_241cc4:
    // 0x241cc4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x241cc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241ccc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x241cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x241cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x241cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241cd4: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x241cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x241cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x241CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CDCu;
        // 0x241ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241CE4u;
    // 0x241ce4: 0x0  nop
    ctx->pc = 0x241ce4u;
    // NOP
    ctx->pc = 0x241ce8u;
}
