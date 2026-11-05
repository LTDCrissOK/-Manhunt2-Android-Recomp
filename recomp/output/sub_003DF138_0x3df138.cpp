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

// Function: sub_003DF138
// Address: 0x3df138 - 0x3df1f8
void sub_003DF138_0x3df138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF138_0x3df138");
#endif

    switch (ctx->pc) {
        case 0x3df15cu: goto label_3df15c;
        case 0x3df174u: goto label_3df174;
        case 0x3df180u: goto label_3df180;
        case 0x3df18cu: goto label_3df18c;
        case 0x3df198u: goto label_3df198;
        case 0x3df1a4u: goto label_3df1a4;
        case 0x3df1b0u: goto label_3df1b0;
        case 0x3df1bcu: goto label_3df1bc;
        case 0x3df1c8u: goto label_3df1c8;
        case 0x3df1dcu: goto label_3df1dc;
        default: break;
    }

    ctx->pc = 0x3df138u;

    // 0x3df138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3df13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3df13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3df140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3df140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3df144: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3df144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df14c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3df150: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3df150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x3df154: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF154u;
    SET_GPR_U32(ctx, 31, 0x3DF15Cu);
    ctx->pc = 0x3DF158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF154u;
    // 0x3df158: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF154u, 0x3DF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF15Cu;
label_3df15c:
    // 0x3df15c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3df15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3df160: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x3df160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x3df164: 0x244217b8  addiu       $v0, $v0, 0x17B8
    ctx->pc = 0x3df164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6072));
    // 0x3df168: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3df168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3df16c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF16Cu;
    SET_GPR_U32(ctx, 31, 0x3DF174u);
    ctx->pc = 0x3DF170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF16Cu;
    // 0x3df170: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF16Cu, 0x3DF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF174u;
label_3df174:
    // 0x3df174: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x3df174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3df178: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF178u;
    SET_GPR_U32(ctx, 31, 0x3DF180u);
    ctx->pc = 0x3DF17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF178u;
    // 0x3df17c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF178u, 0x3DF180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF180u;
label_3df180:
    // 0x3df180: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3df180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x3df184: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF184u;
    SET_GPR_U32(ctx, 31, 0x3DF18Cu);
    ctx->pc = 0x3DF188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF184u;
    // 0x3df188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF184u, 0x3DF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF18Cu;
label_3df18c:
    // 0x3df18c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3df18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3df190: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF190u;
    SET_GPR_U32(ctx, 31, 0x3DF198u);
    ctx->pc = 0x3DF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF190u;
    // 0x3df194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF190u, 0x3DF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF198u;
label_3df198:
    // 0x3df198: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x3df198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x3df19c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF19Cu;
    SET_GPR_U32(ctx, 31, 0x3DF1A4u);
    ctx->pc = 0x3DF1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF19Cu;
    // 0x3df1a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF19Cu, 0x3DF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1A4u;
label_3df1a4:
    // 0x3df1a4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3df1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3df1a8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF1A8u;
    SET_GPR_U32(ctx, 31, 0x3DF1B0u);
    ctx->pc = 0x3DF1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1A8u;
    // 0x3df1ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF1A8u, 0x3DF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1B0u;
label_3df1b0:
    // 0x3df1b0: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x3df1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x3df1b4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF1B4u;
    SET_GPR_U32(ctx, 31, 0x3DF1BCu);
    ctx->pc = 0x3DF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1B4u;
    // 0x3df1b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF1B4u, 0x3DF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1BCu;
label_3df1bc:
    // 0x3df1bc: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3df1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3df1c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF1C0u;
    SET_GPR_U32(ctx, 31, 0x3DF1C8u);
    ctx->pc = 0x3DF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1C0u;
    // 0x3df1c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF1C0u, 0x3DF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1C8u;
label_3df1c8:
    // 0x3df1c8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3df1c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3df1cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF1CCu;
    {
        const bool branch_taken_0x3df1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1CCu;
        // 0x3df1d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df1cc) {
            ctx->pc = 0x3DF1E0u;
            goto label_3df1e0;
        }
    }
    ctx->pc = 0x3DF1D4u;
    // 0x3df1d4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DF1D4u;
    SET_GPR_U32(ctx, 31, 0x3DF1DCu);
    ctx->pc = 0x3DF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1D4u;
    // 0x3df1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DF1D4u, 0x3DF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1DCu;
label_3df1dc:
    // 0x3df1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3df1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df1e0:
    // 0x3df1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3df1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3df1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1E8u;
        // 0x3df1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF1F0u;
    // 0x3df1f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df1f4: 0x0  nop
    ctx->pc = 0x3df1f4u;
    // NOP
    ctx->pc = 0x3df1f8u;
}
