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

// Function: sub_002FD150
// Address: 0x2fd150 - 0x2fd1c0
void sub_002FD150_0x2fd150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD150_0x2fd150");
#endif

    switch (ctx->pc) {
        case 0x2fd150u: goto label_2fd150;
        case 0x2fd154u: goto label_2fd154;
        case 0x2fd158u: goto label_2fd158;
        case 0x2fd15cu: goto label_2fd15c;
        case 0x2fd160u: goto label_2fd160;
        case 0x2fd164u: goto label_2fd164;
        case 0x2fd168u: goto label_2fd168;
        case 0x2fd16cu: goto label_2fd16c;
        case 0x2fd170u: goto label_2fd170;
        case 0x2fd174u: goto label_2fd174;
        case 0x2fd178u: goto label_2fd178;
        case 0x2fd17cu: goto label_2fd17c;
        case 0x2fd180u: goto label_2fd180;
        case 0x2fd184u: goto label_2fd184;
        case 0x2fd188u: goto label_2fd188;
        case 0x2fd18cu: goto label_2fd18c;
        case 0x2fd190u: goto label_2fd190;
        case 0x2fd194u: goto label_2fd194;
        case 0x2fd198u: goto label_2fd198;
        case 0x2fd19cu: goto label_2fd19c;
        case 0x2fd1a0u: goto label_2fd1a0;
        case 0x2fd1a4u: goto label_2fd1a4;
        case 0x2fd1a8u: goto label_2fd1a8;
        case 0x2fd1acu: goto label_2fd1ac;
        case 0x2fd1b0u: goto label_2fd1b0;
        case 0x2fd1b4u: goto label_2fd1b4;
        case 0x2fd1b8u: goto label_2fd1b8;
        case 0x2fd1bcu: goto label_2fd1bc;
        default: break;
    }

    ctx->pc = 0x2fd150u;

label_2fd150:
    // 0x2fd150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2fd154:
    // 0x2fd154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fd158:
    // 0x2fd158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fd158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2fd15c:
    // 0x2fd15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd160:
    // 0x2fd160: 0x8e0513c0  lw          $a1, 0x13C0($s0)
    ctx->pc = 0x2fd160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
label_2fd164:
    // 0x2fd164: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2fd168:
    if (ctx->pc == 0x2FD168u) {
        ctx->pc = 0x2FD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD164u;
        // 0x2fd168: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD16Cu;
        goto label_2fd16c;
    }
    ctx->pc = 0x2FD164u;
    {
        const bool branch_taken_0x2fd164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD164u;
        // 0x2fd168: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd164) {
            ctx->pc = 0x2FD174u;
            goto label_2fd174;
        }
    }
    ctx->pc = 0x2FD16Cu;
label_2fd16c:
    // 0x2fd16c: 0xc0b2b08  jal         func_2CAC20
label_2fd170:
    if (ctx->pc == 0x2FD170u) {
        ctx->pc = 0x2FD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD16Cu;
        // 0x2fd170: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD174u;
        goto label_2fd174;
    }
    ctx->pc = 0x2FD16Cu;
    SET_GPR_U32(ctx, 31, 0x2FD174u);
    ctx->pc = 0x2FD170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD16Cu;
    // 0x2fd170: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2FD16Cu, 0x2FD174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD174u;
label_2fd174:
    // 0x2fd174: 0xc076476  jal         func_1D91D8
label_2fd178:
    if (ctx->pc == 0x2FD178u) {
        ctx->pc = 0x2FD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD174u;
        // 0x2fd178: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD17Cu;
        goto label_2fd17c;
    }
    ctx->pc = 0x2FD174u;
    SET_GPR_U32(ctx, 31, 0x2FD17Cu);
    ctx->pc = 0x2FD178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD174u;
    // 0x2fd178: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D91D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D91D8u, 0x2FD174u, 0x2FD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD17Cu;
label_2fd17c:
    // 0x2fd17c: 0x8e0413cc  lw          $a0, 0x13CC($s0)
    ctx->pc = 0x2fd17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5068)));
label_2fd180:
    // 0x2fd180: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2fd184:
    if (ctx->pc == 0x2FD184u) {
        ctx->pc = 0x2FD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD180u;
        // 0x2fd184: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD188u;
        goto label_2fd188;
    }
    ctx->pc = 0x2FD180u;
    {
        const bool branch_taken_0x2fd180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd180) {
            ctx->pc = 0x2FD184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD180u;
            // 0x2fd184: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD194u;
            goto label_2fd194;
        }
    }
    ctx->pc = 0x2FD188u;
label_2fd188:
    // 0x2fd188: 0xc07624c  jal         func_1D8930
label_2fd18c:
    if (ctx->pc == 0x2FD18Cu) {
        ctx->pc = 0x2FD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD188u;
        // 0x2fd18c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD190u;
        goto label_2fd190;
    }
    ctx->pc = 0x2FD188u;
    SET_GPR_U32(ctx, 31, 0x2FD190u);
    ctx->pc = 0x2FD18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD188u;
    // 0x2fd18c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8930u, 0x2FD188u, 0x2FD190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD190u;
label_2fd190:
    // 0x2fd190: 0x8e0413c4  lw          $a0, 0x13C4($s0)
    ctx->pc = 0x2fd190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
label_2fd194:
    // 0x2fd194: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2fd198:
    if (ctx->pc == 0x2FD198u) {
        ctx->pc = 0x2FD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD194u;
        // 0x2fd198: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD19Cu;
        goto label_2fd19c;
    }
    ctx->pc = 0x2FD194u;
    {
        const bool branch_taken_0x2fd194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD194u;
        // 0x2fd198: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd194) {
            ctx->pc = 0x2FD1B0u;
            goto label_2fd1b0;
        }
    }
    ctx->pc = 0x2FD19Cu;
label_2fd19c:
    // 0x2fd19c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2fd19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_2fd1a0:
    // 0x2fd1a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2fd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2fd1a4:
    // 0x2fd1a4: 0x40f809  jalr        $v0
label_2fd1a8:
    if (ctx->pc == 0x2FD1A8u) {
        ctx->pc = 0x2FD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1A4u;
        // 0x2fd1a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD1ACu;
        goto label_2fd1ac;
    }
    ctx->pc = 0x2FD1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FD1ACu);
        ctx->pc = 0x2FD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1A4u;
        // 0x2fd1a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD1A4u, 0x2FD1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FD1ACu;
label_2fd1ac:
    // 0x2fd1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd1b0:
    // 0x2fd1b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fd1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2fd1b4:
    // 0x2fd1b4: 0x3e00008  jr          $ra
label_2fd1b8:
    if (ctx->pc == 0x2FD1B8u) {
        ctx->pc = 0x2FD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1B4u;
        // 0x2fd1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD1BCu;
        goto label_2fd1bc;
    }
    ctx->pc = 0x2FD1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1B4u;
        // 0x2fd1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD1BCu;
label_2fd1bc:
    // 0x2fd1bc: 0x0  nop
    ctx->pc = 0x2fd1bcu;
    // NOP
    ctx->pc = 0x2fd1c0u;
}
