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

// Function: sub_002FBBC8
// Address: 0x2fbbc8 - 0x2fc008
void sub_002FBBC8_0x2fbbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBBC8_0x2fbbc8");
#endif

    switch (ctx->pc) {
        case 0x2fbc14u: goto label_2fbc14;
        case 0x2fbc54u: goto label_2fbc54;
        case 0x2fbc78u: goto label_2fbc78;
        case 0x2fbc84u: goto label_2fbc84;
        case 0x2fbc90u: goto label_2fbc90;
        case 0x2fbcd4u: goto label_2fbcd4;
        case 0x2fbce0u: goto label_2fbce0;
        case 0x2fbd20u: goto label_2fbd20;
        case 0x2fbd58u: goto label_2fbd58;
        case 0x2fbd88u: goto label_2fbd88;
        case 0x2fbd94u: goto label_2fbd94;
        case 0x2fbda0u: goto label_2fbda0;
        case 0x2fbe04u: goto label_2fbe04;
        case 0x2fbe18u: goto label_2fbe18;
        case 0x2fbe24u: goto label_2fbe24;
        case 0x2fbe40u: goto label_2fbe40;
        case 0x2fbe50u: goto label_2fbe50;
        case 0x2fbe64u: goto label_2fbe64;
        case 0x2fbeb8u: goto label_2fbeb8;
        case 0x2fbed0u: goto label_2fbed0;
        case 0x2fbf04u: goto label_2fbf04;
        case 0x2fbf50u: goto label_2fbf50;
        case 0x2fbf6cu: goto label_2fbf6c;
        case 0x2fbf9cu: goto label_2fbf9c;
        case 0x2fbfacu: goto label_2fbfac;
        default: break;
    }

    ctx->pc = 0x2fbbc8u;

    // 0x2fbbc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fbbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fbbcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fbbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fbbd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fbbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2fbbd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fbbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbbd8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2fbbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2fbbdc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2fbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2fbbe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fbbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fbbe4: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x2fbbe4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fbbe8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2fbbe8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fbbec: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2fbbecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2fbbf0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBBF0u;
    {
        const bool branch_taken_0x2fbbf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBF0u;
        // 0x2fbbf4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbf0) {
            ctx->pc = 0x2FBC04u;
            goto label_2fbc04;
        }
    }
    ctx->pc = 0x2FBBF8u;
    // 0x2fbbf8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2fbbf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbbfc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBBFCu;
    {
        const bool branch_taken_0x2fbbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbbfc) {
            ctx->pc = 0x2FBC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBBFCu;
            // 0x2fbc00: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC0Cu;
            goto label_2fbc0c;
        }
    }
    ctx->pc = 0x2FBC04u;
label_2fbc04:
    // 0x2fbc04: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x2FBC04u;
    {
        const bool branch_taken_0x2fbc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC04u;
        // 0x2fbc08: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc04) {
            ctx->pc = 0x2FBFD8u;
            goto label_2fbfd8;
        }
    }
    ctx->pc = 0x2FBC0Cu;
label_2fbc0c:
    // 0x2fbc0c: 0xc0696ec  jal         func_1A5BB0
    ctx->pc = 0x2FBC0Cu;
    SET_GPR_U32(ctx, 31, 0x2FBC14u);
    ctx->pc = 0x2FBC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC0Cu;
    // 0x2fbc10: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BB0u, 0x2FBC0Cu, 0x2FBC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC14u;
label_2fbc14:
    // 0x2fbc14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fbc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc18: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x2fbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x2fbc1c: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBC1Cu;
    {
        const bool branch_taken_0x2fbc1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fbc1c) {
            ctx->pc = 0x2FBC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC1Cu;
            // 0x2fbc20: 0x8e4211e4  lw          $v0, 0x11E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC2Cu;
            goto label_2fbc2c;
        }
    }
    ctx->pc = 0x2FBC24u;
    // 0x2fbc24: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x2FBC24u;
    {
        const bool branch_taken_0x2fbc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC24u;
        // 0x2fbc28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc24) {
            ctx->pc = 0x2FBFD8u;
            goto label_2fbfd8;
        }
    }
    ctx->pc = 0x2FBC2Cu;
label_2fbc2c:
    // 0x2fbc2c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBC2Cu;
    {
        const bool branch_taken_0x2fbc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbc2c) {
            ctx->pc = 0x2FBC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC2Cu;
            // 0x2fbc30: 0x8e430334  lw          $v1, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC58u;
            goto label_2fbc58;
        }
    }
    ctx->pc = 0x2FBC34u;
    // 0x2fbc34: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x2fbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2fbc38: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2fbc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2fbc3c: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2fbc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2fbc40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBC40u;
    {
        const bool branch_taken_0x2fbc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbc40) {
            ctx->pc = 0x2FBC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBC40u;
            // 0x2fbc44: 0x8e430334  lw          $v1, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC58u;
            goto label_2fbc58;
        }
    }
    ctx->pc = 0x2FBC48u;
    // 0x2fbc48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fbc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc4c: 0xc0bc5e2  jal         func_2F1788
    ctx->pc = 0x2FBC4Cu;
    SET_GPR_U32(ctx, 31, 0x2FBC54u);
    ctx->pc = 0x2FBC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC4Cu;
    // 0x2fbc50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x2FBC4Cu, 0x2FBC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC54u;
label_2fbc54:
    // 0x2fbc54: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2fbc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2fbc58:
    // 0x2fbc58: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2fbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2fbc5c: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2fbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x2fbc60: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2fbc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fbc64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBC64u;
    {
        const bool branch_taken_0x2fbc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC64u;
        // 0x2fbc68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc64) {
            ctx->pc = 0x2FBC90u;
            goto label_2fbc90;
        }
    }
    ctx->pc = 0x2FBC6Cu;
    // 0x2fbc6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fbc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbc70: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x2FBC70u;
    SET_GPR_U32(ctx, 31, 0x2FBC78u);
    ctx->pc = 0x2FBC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC70u;
    // 0x2fbc74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x2FBC70u, 0x2FBC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC78u;
label_2fbc78:
    // 0x2fbc78: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2fbc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbc7c: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x2FBC7Cu;
    SET_GPR_U32(ctx, 31, 0x2FBC84u);
    ctx->pc = 0x2FBC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC7Cu;
    // 0x2fbc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2FBC7Cu, 0x2FBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC84u;
label_2fbc84:
    // 0x2fbc84: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2fbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbc88: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x2FBC88u;
    SET_GPR_U32(ctx, 31, 0x2FBC90u);
    ctx->pc = 0x2FBC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC88u;
    // 0x2fbc8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FBC88u, 0x2FBC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC90u;
label_2fbc90:
    // 0x2fbc90: 0xa240138c  sb          $zero, 0x138C($s2)
    ctx->pc = 0x2fbc90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5004), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbc94: 0xae401388  sw          $zero, 0x1388($s2)
    ctx->pc = 0x2fbc94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5000), GPR_U32(ctx, 0));
    // 0x2fbc98: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x2fbc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbc9c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2fbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2fbca0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2FBCA0u;
    {
        const bool branch_taken_0x2fbca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCA0u;
        // 0x2fbca4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbca0) {
            ctx->pc = 0x2FBDB8u;
            goto label_2fbdb8;
        }
    }
    ctx->pc = 0x2FBCA8u;
    // 0x2fbca8: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2FBCA8u;
    {
        const bool branch_taken_0x2fbca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCA8u;
        // 0x2fbcac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbca8) {
            ctx->pc = 0x2FBDB8u;
            goto label_2fbdb8;
        }
    }
    ctx->pc = 0x2FBCB0u;
    // 0x2fbcb0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2FBCB0u;
    {
        const bool branch_taken_0x2fbcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB0u;
        // 0x2fbcb4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcb0) {
            ctx->pc = 0x2FBDB8u;
            goto label_2fbdb8;
        }
    }
    ctx->pc = 0x2FBCB8u;
    // 0x2fbcb8: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2FBCB8u;
    {
        const bool branch_taken_0x2fbcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB8u;
        // 0x2fbcbc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcb8) {
            ctx->pc = 0x2FBDB8u;
            goto label_2fbdb8;
        }
    }
    ctx->pc = 0x2FBCC0u;
    // 0x2fbcc0: 0x5062003e  beql        $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2FBCC0u;
    {
        const bool branch_taken_0x2fbcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbcc0) {
            ctx->pc = 0x2FBCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBCC0u;
            // 0x2fbcc4: 0x8e430338  lw          $v1, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBDBCu;
            goto label_2fbdbc;
        }
    }
    ctx->pc = 0x2FBCC8u;
    // 0x2fbcc8: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2fbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2fbccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBCCCu;
    {
        const bool branch_taken_0x2fbccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCCCu;
        // 0x2fbcd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbccc) {
            ctx->pc = 0x2FBCDCu;
            goto label_2fbcdc;
        }
    }
    ctx->pc = 0x2FBCD4u;
label_2fbcd4:
    // 0x2fbcd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBCD4u;
    {
        const bool branch_taken_0x2fbcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCD4u;
        // 0x2fbcd8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcd4) {
            ctx->pc = 0x2FBCFCu;
            goto label_2fbcfc;
        }
    }
    ctx->pc = 0x2FBCDCu;
label_2fbcdc:
    // 0x2fbcdc: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2fbcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_2fbce0:
    // 0x2fbce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbce4: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FBCE4u;
    {
        const bool branch_taken_0x2fbce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCE4u;
        // 0x2fbce8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbce4) {
            ctx->pc = 0x2FBCD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbcd4;
        }
    }
    ctx->pc = 0x2FBCECu;
    // 0x2fbcec: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2fbcecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fbcf0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FBCF0u;
    {
        const bool branch_taken_0x2fbcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCF0u;
        // 0x2fbcf4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcf0) {
            ctx->pc = 0x2FBCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbce0;
        }
    }
    ctx->pc = 0x2FBCF8u;
    // 0x2fbcf8: 0x8ca301e8  lw          $v1, 0x1E8($a1)
    ctx->pc = 0x2fbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_2fbcfc:
    // 0x2fbcfc: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2fbcfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2fbd00: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2fbd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2fbd04: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x2fbd04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2fbd08: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x2fbd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbd0c: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2fbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2fbd10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FBD10u;
    {
        const bool branch_taken_0x2fbd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbd10) {
            ctx->pc = 0x2FBD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBD10u;
            // 0x2fbd14: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBD40u;
            goto label_2fbd40;
        }
    }
    ctx->pc = 0x2FBD18u;
    // 0x2fbd18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fbd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd1c: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2fbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_2fbd20:
    // 0x2fbd20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBD24u;
    {
        const bool branch_taken_0x2fbd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD24u;
        // 0x2fbd28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd24) {
            ctx->pc = 0x2FBD3Cu;
            goto label_2fbd3c;
        }
    }
    ctx->pc = 0x2FBD2Cu;
    // 0x2fbd2c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2fbd2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fbd30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FBD30u;
    {
        const bool branch_taken_0x2fbd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD30u;
        // 0x2fbd34: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd30) {
            ctx->pc = 0x2FBD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbd20;
        }
    }
    ctx->pc = 0x2FBD38u;
    // 0x2fbd38: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x2fbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_2fbd3c:
    // 0x2fbd3c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2fbd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2fbd40:
    // 0x2fbd40: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x2fbd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbd44: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x2fbd48: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBD48u;
    {
        const bool branch_taken_0x2fbd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD48u;
        // 0x2fbd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd48) {
            ctx->pc = 0x2FBD74u;
            goto label_2fbd74;
        }
    }
    ctx->pc = 0x2FBD50u;
    // 0x2fbd50: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2fbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x2fbd54: 0x0  nop
    ctx->pc = 0x2fbd54u;
    // NOP
label_2fbd58:
    // 0x2fbd58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fbd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd5c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBD5Cu;
    {
        const bool branch_taken_0x2fbd5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD5Cu;
        // 0x2fbd60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd5c) {
            ctx->pc = 0x2FBD74u;
            goto label_2fbd74;
        }
    }
    ctx->pc = 0x2FBD64u;
    // 0x2fbd64: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fbd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fbd68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FBD68u;
    {
        const bool branch_taken_0x2fbd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD68u;
        // 0x2fbd6c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd68) {
            ctx->pc = 0x2FBD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbd58;
        }
    }
    ctx->pc = 0x2FBD70u;
    // 0x2fbd70: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fbd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fbd74:
    // 0x2fbd74: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x2fbd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x2fbd78: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x2fbd78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x2fbd7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fbd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fbd80: 0xc073f80  jal         func_1CFE00
    ctx->pc = 0x2FBD80u;
    SET_GPR_U32(ctx, 31, 0x2FBD88u);
    ctx->pc = 0x1CFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE00u, 0x2FBD80u, 0x2FBD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD88u;
label_2fbd88:
    // 0x2fbd88: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2fbd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbd8c: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x2FBD8Cu;
    SET_GPR_U32(ctx, 31, 0x2FBD94u);
    ctx->pc = 0x2FBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD8Cu;
    // 0x2fbd90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2FBD8Cu, 0x2FBD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD94u;
label_2fbd94:
    // 0x2fbd94: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2fbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbd98: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x2FBD98u;
    SET_GPR_U32(ctx, 31, 0x2FBDA0u);
    ctx->pc = 0x2FBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD98u;
    // 0x2fbd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FBD98u, 0x2FBDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDA0u;
label_2fbda0:
    // 0x2fbda0: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2fbda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbda4: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2fbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2fbda8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBDA8u;
    {
        const bool branch_taken_0x2fbda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDA8u;
        // 0x2fbdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbda8) {
            ctx->pc = 0x2FBDB8u;
            goto label_2fbdb8;
        }
    }
    ctx->pc = 0x2FBDB0u;
    // 0x2fbdb0: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2FBDB0u;
    {
        const bool branch_taken_0x2fbdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDB0u;
        // 0x2fbdb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdb0) {
            ctx->pc = 0x2FBFD8u;
            goto label_2fbfd8;
        }
    }
    ctx->pc = 0x2FBDB8u;
label_2fbdb8:
    // 0x2fbdb8: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x2fbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_2fbdbc:
    // 0x2fbdbc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2fbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2fbdc0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FBDC0u;
    {
        const bool branch_taken_0x2fbdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbdc0) {
            ctx->pc = 0x2FBDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBDC0u;
            // 0x2fbdc4: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBE08u;
            goto label_2fbe08;
        }
    }
    ctx->pc = 0x2FBDC8u;
    // 0x2fbdc8: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x2fbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2fbdcc: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FBDCCu;
    {
        const bool branch_taken_0x2fbdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbdcc) {
            ctx->pc = 0x2FBDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBDCCu;
            // 0x2fbdd0: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBE08u;
            goto label_2fbe08;
        }
    }
    ctx->pc = 0x2FBDD4u;
    // 0x2fbdd4: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2fbdd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2fbdd8: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x2fbdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x2fbddc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x2fbddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x2fbde0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fbde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fbde4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2fbde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2fbde8: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x2fbde8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2fbdec: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x2fbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2fbdf0: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x2fbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2fbdf4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2fbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2fbdf8: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x2fbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2fbdfc: 0xc073f80  jal         func_1CFE00
    ctx->pc = 0x2FBDFCu;
    SET_GPR_U32(ctx, 31, 0x2FBE04u);
    ctx->pc = 0x2FBE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBDFCu;
    // 0x2fbe00: 0x8c6400a0  lw          $a0, 0xA0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE00u, 0x2FBDFCu, 0x2FBE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE04u;
label_2fbe04:
    // 0x2fbe04: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x2fbe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_2fbe08:
    // 0x2fbe08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fbe08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fbe0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe10: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x2FBE10u;
    SET_GPR_U32(ctx, 31, 0x2FBE18u);
    ctx->pc = 0x2FBE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE10u;
    // 0x2fbe14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x2FBE10u, 0x2FBE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE18u;
label_2fbe18:
    // 0x2fbe18: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x2fbe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2fbe1c: 0xc06bfc8  jal         func_1AFF20
    ctx->pc = 0x2FBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2FBE24u);
    ctx->pc = 0x2FBE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE1Cu;
    // 0x2fbe20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2FBE1Cu, 0x2FBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE24u;
label_2fbe24:
    // 0x2fbe24: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x2fbe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2fbe28: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2fbe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2fbe2c: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2FBE2Cu;
    {
        const bool branch_taken_0x2fbe2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE2Cu;
        // 0x2fbe30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe2c) {
            ctx->pc = 0x2FBFD8u;
            goto label_2fbfd8;
        }
    }
    ctx->pc = 0x2FBE34u;
    // 0x2fbe34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fbe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe38: 0xc08dc16  jal         func_237058
    ctx->pc = 0x2FBE38u;
    SET_GPR_U32(ctx, 31, 0x2FBE40u);
    ctx->pc = 0x2FBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE38u;
    // 0x2fbe3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x2FBE38u, 0x2FBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE40u;
label_2fbe40:
    // 0x2fbe40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fbe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe44: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2fbe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2fbe48: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2FBE48u;
    SET_GPR_U32(ctx, 31, 0x2FBE50u);
    ctx->pc = 0x2FBE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE48u;
    // 0x2fbe4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FBE48u, 0x2FBE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE50u;
label_2fbe50:
    // 0x2fbe50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fbe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fbe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2fbe58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe5c: 0xc08e04a  jal         func_238128
    ctx->pc = 0x2FBE5Cu;
    SET_GPR_U32(ctx, 31, 0x2FBE64u);
    ctx->pc = 0x2FBE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE5Cu;
    // 0x2fbe60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238128u, 0x2FBE5Cu, 0x2FBE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE64u;
label_2fbe64:
    // 0x2fbe64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBE64u;
    {
        const bool branch_taken_0x2fbe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe64) {
            ctx->pc = 0x2FBE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBE64u;
            // 0x2fbe68: 0xde421020  ld          $v0, 0x1020($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBE74u;
            goto label_2fbe74;
        }
    }
    ctx->pc = 0x2FBE6Cu;
    // 0x2fbe6c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2FBE6Cu;
    {
        const bool branch_taken_0x2fbe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE6Cu;
        // 0x2fbe70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe6c) {
            ctx->pc = 0x2FBFD8u;
            goto label_2fbfd8;
        }
    }
    ctx->pc = 0x2FBE74u;
label_2fbe74:
    // 0x2fbe74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fbe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fbe78: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2fbe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2fbe7c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2fbe7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fbe80: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x2fbe80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x2fbe84: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2fbe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fbe88: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x2fbe88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x2fbe8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fbe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fbe90: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x2fbe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2fbe94: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2fbe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2fbe98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2fbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2fbe9c: 0xfe421020  sd          $v0, 0x1020($s2)
    ctx->pc = 0x2fbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4128), GPR_U64(ctx, 2));
    // 0x2fbea0: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fbea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x2fbea4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBEA4u;
    {
        const bool branch_taken_0x2fbea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEA4u;
        // 0x2fbea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbea4) {
            ctx->pc = 0x2FBEC0u;
            goto label_2fbec0;
        }
    }
    ctx->pc = 0x2FBEACu;
    // 0x2fbeac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2fbeacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbeb0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FBEB0u;
    {
        const bool branch_taken_0x2fbeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEB0u;
        // 0x2fbeb4: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbeb0) {
            ctx->pc = 0x2FBEECu;
            goto label_2fbeec;
        }
    }
    ctx->pc = 0x2FBEB8u;
label_2fbeb8:
    // 0x2fbeb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FBEB8u;
    {
        const bool branch_taken_0x2fbeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEB8u;
        // 0x2fbebc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbeb8) {
            ctx->pc = 0x2FBEECu;
            goto label_2fbeec;
        }
    }
    ctx->pc = 0x2FBEC0u;
label_2fbec0:
    // 0x2fbec0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2fbec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fbec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbec8: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2fbec8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x2fbecc: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x2fbeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_2fbed0:
    // 0x2fbed0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fbed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbed4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2FBED4u;
    {
        const bool branch_taken_0x2fbed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBED4u;
        // 0x2fbed8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbed4) {
            ctx->pc = 0x2FBEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbeb8;
        }
    }
    ctx->pc = 0x2FBEDCu;
    // 0x2fbedc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fbedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fbee0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FBEE0u;
    {
        const bool branch_taken_0x2fbee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEE0u;
        // 0x2fbee4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbee0) {
            ctx->pc = 0x2FBED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbed0;
        }
    }
    ctx->pc = 0x2FBEE8u;
    // 0x2fbee8: 0x8cd001e8  lw          $s0, 0x1E8($a2)
    ctx->pc = 0x2fbee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fbeec:
    // 0x2fbeec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2fbeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2fbef0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2fbef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2fbef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fbef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fbef8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2fbef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbefc: 0xc06a48c  jal         func_1A9230
    ctx->pc = 0x2FBEFCu;
    SET_GPR_U32(ctx, 31, 0x2FBF04u);
    ctx->pc = 0x2FBF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBEFCu;
    // 0x2fbf00: 0x8cf101e8  lw          $s1, 0x1E8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9230u, 0x2FBEFCu, 0x2FBF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF04u;
label_2fbf04:
    // 0x2fbf04: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FBF04u;
    {
        const bool branch_taken_0x2fbf04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf04) {
            ctx->pc = 0x2FBF80u;
            goto label_2fbf80;
        }
    }
    ctx->pc = 0x2FBF0Cu;
    // 0x2fbf0c: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x2fbf0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2fbf10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fbf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fbf14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FBF14u;
    {
        const bool branch_taken_0x2fbf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF14u;
        // 0x2fbf18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf14) {
            ctx->pc = 0x2FBF80u;
            goto label_2fbf80;
        }
    }
    ctx->pc = 0x2FBF1Cu;
    // 0x2fbf1c: 0xc6340014  lwc1        $f20, 0x14($s1)
    ctx->pc = 0x2fbf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fbf20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fbf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fbf24: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fbf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fbf28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fbf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fbf2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fbf2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fbf30: 0x4614b541  sub.s       $f21, $f22, $f20
    ctx->pc = 0x2fbf30u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x2fbf34: 0x3c0140ef  lui         $at, 0x40EF
    ctx->pc = 0x2fbf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16623 << 16));
    // 0x2fbf38: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2fbf38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2fbf3c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2fbf3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2fbf40: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2fbf40u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2fbf44: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2fbf44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2fbf48: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x2FBF48u;
    SET_GPR_U32(ctx, 31, 0x2FBF50u);
    ctx->pc = 0x2FBF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF48u;
    // 0x2fbf4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x2FBF48u, 0x2FBF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF50u;
label_2fbf50:
    // 0x2fbf50: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2fbf50u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2fbf54: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2fbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2fbf58: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2fbf58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2fbf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf60: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x2fbf60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2fbf64: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x2FBF64u;
    SET_GPR_U32(ctx, 31, 0x2FBF6Cu);
    ctx->pc = 0x2FBF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF64u;
    // 0x2fbf68: 0xe6340018  swc1        $f20, 0x18($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x2FBF64u, 0x2FBF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF6Cu;
label_2fbf6c:
    // 0x2fbf6c: 0x4615b541  sub.s       $f21, $f22, $f21
    ctx->pc = 0x2fbf6cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x2fbf70: 0xe6160010  swc1        $f22, 0x10($s0)
    ctx->pc = 0x2fbf70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2fbf74: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x2fbf74u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x2fbf78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FBF78u;
    {
        const bool branch_taken_0x2fbf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF78u;
        // 0x2fbf7c: 0xe6150018  swc1        $f21, 0x18($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf78) {
            ctx->pc = 0x2FBF9Cu;
            goto label_2fbf9c;
        }
    }
    ctx->pc = 0x2FBF80u;
label_2fbf80:
    // 0x2fbf80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fbf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fbf84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fbf84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fbf88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2fbf8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2fbf90: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2fbf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2fbf94: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x2FBF94u;
    SET_GPR_U32(ctx, 31, 0x2FBF9Cu);
    ctx->pc = 0x2FBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF94u;
    // 0x2fbf98: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x2FBF94u, 0x2FBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF9Cu;
label_2fbf9c:
    // 0x2fbf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbfa0: 0x26657f78  addiu       $a1, $s3, 0x7F78
    ctx->pc = 0x2fbfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32632));
    // 0x2fbfa4: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x2FBFA4u;
    SET_GPR_U32(ctx, 31, 0x2FBFACu);
    ctx->pc = 0x2FBFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBFA4u;
    // 0x2fbfa8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2FBFA4u, 0x2FBFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBFACu;
label_2fbfac:
    // 0x2fbfac: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x2fbfacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2fbfb0: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2fbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2fbfb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fbfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fbfb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fbfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fbfbc: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2fbfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2fbfc0: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x2fbfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2fbfc4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fbfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fbfc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fbfc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fbfcc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fbfccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fbfd0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2fbfd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fbfd4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2fbfd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2fbfd8:
    // 0x2fbfd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fbfd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbfdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2fbfdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fbfe0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fbfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbfe4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2fbfe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fbfe8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fbfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fbfec: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2fbfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fbff0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2fbff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fbff4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2fbff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fbff8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2fbff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fbffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFFCu;
        // 0x2fc000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC004u;
    // 0x2fc004: 0x0  nop
    ctx->pc = 0x2fc004u;
    // NOP
    ctx->pc = 0x2fc008u;
}
