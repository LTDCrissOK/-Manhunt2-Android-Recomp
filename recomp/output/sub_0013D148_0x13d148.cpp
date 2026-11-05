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

// Function: sub_0013D148
// Address: 0x13d148 - 0x13d1e0
void sub_0013D148_0x13d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D148_0x13d148");
#endif

    switch (ctx->pc) {
        case 0x13d148u: goto label_13d148;
        case 0x13d14cu: goto label_13d14c;
        case 0x13d150u: goto label_13d150;
        case 0x13d154u: goto label_13d154;
        case 0x13d158u: goto label_13d158;
        case 0x13d15cu: goto label_13d15c;
        case 0x13d160u: goto label_13d160;
        case 0x13d164u: goto label_13d164;
        case 0x13d168u: goto label_13d168;
        case 0x13d16cu: goto label_13d16c;
        case 0x13d170u: goto label_13d170;
        case 0x13d174u: goto label_13d174;
        case 0x13d178u: goto label_13d178;
        case 0x13d17cu: goto label_13d17c;
        case 0x13d180u: goto label_13d180;
        case 0x13d184u: goto label_13d184;
        case 0x13d188u: goto label_13d188;
        case 0x13d18cu: goto label_13d18c;
        case 0x13d190u: goto label_13d190;
        case 0x13d194u: goto label_13d194;
        case 0x13d198u: goto label_13d198;
        case 0x13d19cu: goto label_13d19c;
        case 0x13d1a0u: goto label_13d1a0;
        case 0x13d1a4u: goto label_13d1a4;
        case 0x13d1a8u: goto label_13d1a8;
        case 0x13d1acu: goto label_13d1ac;
        case 0x13d1b0u: goto label_13d1b0;
        case 0x13d1b4u: goto label_13d1b4;
        case 0x13d1b8u: goto label_13d1b8;
        case 0x13d1bcu: goto label_13d1bc;
        case 0x13d1c0u: goto label_13d1c0;
        case 0x13d1c4u: goto label_13d1c4;
        case 0x13d1c8u: goto label_13d1c8;
        case 0x13d1ccu: goto label_13d1cc;
        case 0x13d1d0u: goto label_13d1d0;
        case 0x13d1d4u: goto label_13d1d4;
        case 0x13d1d8u: goto label_13d1d8;
        case 0x13d1dcu: goto label_13d1dc;
        default: break;
    }

    ctx->pc = 0x13d148u;

label_13d148:
    // 0x13d148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13d14c:
    // 0x13d14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13d150:
    // 0x13d150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13d154:
    // 0x13d154: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13d154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13d158:
    // 0x13d158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d15c:
    // 0x13d15c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13d15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13d160:
    // 0x13d160: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x13d160u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_13d164:
    // 0x13d164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13d168:
    // 0x13d168: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13d168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_13d16c:
    // 0x13d16c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13d16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13d170:
    // 0x13d170: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13d170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13d174:
    // 0x13d174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13d178:
    // 0x13d178: 0xc04f130  jal         func_13C4C0
label_13d17c:
    if (ctx->pc == 0x13D17Cu) {
        ctx->pc = 0x13D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D178u;
        // 0x13d17c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D180u;
        goto label_13d180;
    }
    ctx->pc = 0x13D178u;
    SET_GPR_U32(ctx, 31, 0x13D180u);
    ctx->pc = 0x13D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D178u;
    // 0x13d17c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x13D178u, 0x13D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D180u;
label_13d180:
    // 0x13d180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d184:
    // 0x13d184: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_13d188:
    if (ctx->pc == 0x13D188u) {
        ctx->pc = 0x13D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D184u;
        // 0x13d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D18Cu;
        goto label_13d18c;
    }
    ctx->pc = 0x13D184u;
    {
        const bool branch_taken_0x13d184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D184u;
        // 0x13d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d184) {
            ctx->pc = 0x13D1C4u;
            goto label_13d1c4;
        }
    }
    ctx->pc = 0x13D18Cu;
label_13d18c:
    // 0x13d18c: 0xc04d74a  jal         func_135D28
label_13d190:
    if (ctx->pc == 0x13D190u) {
        ctx->pc = 0x13D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D18Cu;
        // 0x13d190: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D194u;
        goto label_13d194;
    }
    ctx->pc = 0x13D18Cu;
    SET_GPR_U32(ctx, 31, 0x13D194u);
    ctx->pc = 0x13D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D18Cu;
    // 0x13d190: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x13D18Cu, 0x13D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D194u;
label_13d194:
    // 0x13d194: 0xc04d7c0  jal         func_135F00
label_13d198:
    if (ctx->pc == 0x13D198u) {
        ctx->pc = 0x13D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D194u;
        // 0x13d198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D19Cu;
        goto label_13d19c;
    }
    ctx->pc = 0x13D194u;
    SET_GPR_U32(ctx, 31, 0x13D19Cu);
    ctx->pc = 0x13D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D194u;
    // 0x13d198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F00u, 0x13D194u, 0x13D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D19Cu;
label_13d19c:
    // 0x13d19c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_13d1a0:
    if (ctx->pc == 0x13D1A0u) {
        ctx->pc = 0x13D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D19Cu;
        // 0x13d1a0: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1A4u;
        goto label_13d1a4;
    }
    ctx->pc = 0x13D19Cu;
    {
        const bool branch_taken_0x13d19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d19c) {
            ctx->pc = 0x13D1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D19Cu;
            // 0x13d1a0: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D1B4u;
            goto label_13d1b4;
        }
    }
    ctx->pc = 0x13D1A4u;
label_13d1a4:
    // 0x13d1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d1a8:
    // 0x13d1a8: 0xc04f42e  jal         func_13D0B8
label_13d1ac:
    if (ctx->pc == 0x13D1ACu) {
        ctx->pc = 0x13D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1A8u;
        // 0x13d1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1B0u;
        goto label_13d1b0;
    }
    ctx->pc = 0x13D1A8u;
    SET_GPR_U32(ctx, 31, 0x13D1B0u);
    ctx->pc = 0x13D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D1A8u;
    // 0x13d1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0B8u, 0x13D1A8u, 0x13D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1B0u;
label_13d1b0:
    // 0x13d1b0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13d1b4:
    // 0x13d1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d1b8:
    // 0x13d1b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_13d1bc:
    // 0x13d1bc: 0x40f809  jalr        $v0
label_13d1c0:
    if (ctx->pc == 0x13D1C0u) {
        ctx->pc = 0x13D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1BCu;
        // 0x13d1c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1C4u;
        goto label_13d1c4;
    }
    ctx->pc = 0x13D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D1C4u);
        ctx->pc = 0x13D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1BCu;
        // 0x13d1c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D1BCu, 0x13D1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D1C4u;
label_13d1c4:
    // 0x13d1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13d1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d1c8:
    // 0x13d1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13d1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13d1cc:
    // 0x13d1cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13d1ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d1d0:
    // 0x13d1d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13d1d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13d1d4:
    // 0x13d1d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13d1d8:
    // 0x13d1d8: 0x3e00008  jr          $ra
label_13d1dc:
    if (ctx->pc == 0x13D1DCu) {
        ctx->pc = 0x13D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1D8u;
        // 0x13d1dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1E0u;
        goto label_fallthrough_0x13d1d8;
    }
    ctx->pc = 0x13D1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1D8u;
        // 0x13d1dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d1d8:
    ctx->pc = 0x13D1E0u;
}
