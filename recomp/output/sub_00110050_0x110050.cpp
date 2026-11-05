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

// Function: sub_00110050
// Address: 0x110050 - 0x1100d8
void sub_00110050_0x110050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110050_0x110050");
#endif

    switch (ctx->pc) {
        case 0x11007cu: goto label_11007c;
        case 0x110094u: goto label_110094;
        case 0x1100a0u: goto label_1100a0;
        case 0x1100c0u: goto label_1100c0;
        default: break;
    }

    ctx->pc = 0x110050u;

    // 0x110050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110058: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11005c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11005cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110060: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x110060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x110064: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x110064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x110068: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x110068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11006c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x11006Cu;
    {
        const bool branch_taken_0x11006c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11006c) {
            ctx->pc = 0x110070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11006Cu;
            // 0x110070: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1100C4u;
            goto label_1100c4;
        }
    }
    ctx->pc = 0x110074u;
    // 0x110074: 0xc0449c8  jal         func_112720
    ctx->pc = 0x110074u;
    SET_GPR_U32(ctx, 31, 0x11007Cu);
    ctx->pc = 0x110078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110074u;
    // 0x110078: 0x24b2001f  addiu       $s2, $a1, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x110074u, 0x11007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11007Cu;
label_11007c:
    // 0x11007c: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x11007cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x110080: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110084: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x110084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x110088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11008c: 0xc045612  jal         func_115848
    ctx->pc = 0x11008Cu;
    SET_GPR_U32(ctx, 31, 0x110094u);
    ctx->pc = 0x110090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11008Cu;
    // 0x110090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x11008Cu, 0x110094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110094u;
label_110094:
    // 0x110094: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110098: 0xc045668  jal         func_1159A0
    ctx->pc = 0x110098u;
    SET_GPR_U32(ctx, 31, 0x1100A0u);
    ctx->pc = 0x11009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110098u;
    // 0x11009c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x110098u, 0x1100A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100A0u;
label_1100a0:
    // 0x1100a0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1100a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1100a4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1100a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1100a8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1100a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1100ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1100acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1100b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1100b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1100b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1100b8: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x1100B8u;
    SET_GPR_U32(ctx, 31, 0x1100C0u);
    ctx->pc = 0x1100BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100B8u;
    // 0x1100bc: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x1100B8u, 0x1100C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100C0u;
label_1100c0:
    // 0x1100c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1100c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1100c4:
    // 0x1100c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1100c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1100c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1100c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1100cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1100ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1100d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1100D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1100D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100D0u;
        // 0x1100d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1100D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1100D8u;
}
