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

// Function: sub_001FD430
// Address: 0x1fd430 - 0x1fd4e8
void sub_001FD430_0x1fd430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD430_0x1fd430");
#endif

    switch (ctx->pc) {
        case 0x1fd464u: goto label_1fd464;
        case 0x1fd470u: goto label_1fd470;
        case 0x1fd488u: goto label_1fd488;
        case 0x1fd494u: goto label_1fd494;
        case 0x1fd49cu: goto label_1fd49c;
        case 0x1fd4bcu: goto label_1fd4bc;
        case 0x1fd4c8u: goto label_1fd4c8;
        default: break;
    }

    ctx->pc = 0x1fd430u;

    // 0x1fd430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd43c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd440: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fd440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fd444: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FD444u;
    {
        const bool branch_taken_0x1fd444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD444u;
        // 0x1fd448: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd444) {
            ctx->pc = 0x1FD4A4u;
            goto label_1fd4a4;
        }
    }
    ctx->pc = 0x1FD44Cu;
    // 0x1fd44c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd450: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD450u;
    {
        const bool branch_taken_0x1fd450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD450u;
        // 0x1fd454: 0x3c120049  lui         $s2, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd450) {
            ctx->pc = 0x1FD47Cu;
            goto label_1fd47c;
        }
    }
    ctx->pc = 0x1FD458u;
    // 0x1fd458: 0x26500480  addiu       $s0, $s2, 0x480
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x1fd45c: 0xc07dbc0  jal         func_1F6F00
    ctx->pc = 0x1FD45Cu;
    SET_GPR_U32(ctx, 31, 0x1FD464u);
    ctx->pc = 0x1FD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD45Cu;
    // 0x1fd460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6F00u, 0x1FD45Cu, 0x1FD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD464u;
label_1fd464:
    // 0x1fd464: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1fd464u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fd468: 0xc07dbc4  jal         func_1F6F10
    ctx->pc = 0x1FD468u;
    SET_GPR_U32(ctx, 31, 0x1FD470u);
    ctx->pc = 0x1FD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD468u;
    // 0x1fd46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6F10u, 0x1FD468u, 0x1FD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD470u;
label_1fd470:
    // 0x1fd470: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd474: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1fd474u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fd478: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1fd478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1fd47c:
    // 0x1fd47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd480: 0xc07f4ec  jal         func_1FD3B0
    ctx->pc = 0x1FD480u;
    SET_GPR_U32(ctx, 31, 0x1FD488u);
    ctx->pc = 0x1FD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD480u;
    // 0x1fd484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3B0u, 0x1FD480u, 0x1FD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD488u;
label_1fd488:
    // 0x1fd488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd48c: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1FD48Cu;
    SET_GPR_U32(ctx, 31, 0x1FD494u);
    ctx->pc = 0x1FD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD48Cu;
    // 0x1fd490: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FD48Cu, 0x1FD494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD494u;
label_1fd494:
    // 0x1fd494: 0xc07c3ec  jal         func_1F0FB0
    ctx->pc = 0x1FD494u;
    SET_GPR_U32(ctx, 31, 0x1FD49Cu);
    ctx->pc = 0x1FD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD494u;
    // 0x1fd498: 0x26440480  addiu       $a0, $s2, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0FB0u, 0x1FD494u, 0x1FD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD49Cu;
label_1fd49c:
    // 0x1fd49c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FD49Cu;
    {
        const bool branch_taken_0x1fd49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD49Cu;
        // 0x1fd4a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd49c) {
            ctx->pc = 0x1FD4D0u;
            goto label_1fd4d0;
        }
    }
    ctx->pc = 0x1FD4A4u;
label_1fd4a4:
    // 0x1fd4a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd4a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD4A8u;
    {
        const bool branch_taken_0x1fd4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4A8u;
        // 0x1fd4ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4a8) {
            ctx->pc = 0x1FD4D0u;
            goto label_1fd4d0;
        }
    }
    ctx->pc = 0x1FD4B0u;
    // 0x1fd4b0: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1fd4b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd4b4: 0xc07f4ec  jal         func_1FD3B0
    ctx->pc = 0x1FD4B4u;
    SET_GPR_U32(ctx, 31, 0x1FD4BCu);
    ctx->pc = 0x1FD4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4B4u;
    // 0x1fd4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3B0u, 0x1FD4B4u, 0x1FD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4BCu;
label_1fd4bc:
    // 0x1fd4bc: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x1fd4bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1fd4c0: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1FD4C0u;
    SET_GPR_U32(ctx, 31, 0x1FD4C8u);
    ctx->pc = 0x1FD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4C0u;
    // 0x1fd4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FD4C0u, 0x1FD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4C8u;
label_1fd4c8:
    // 0x1fd4c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fd4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1fd4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd4d0:
    // 0x1fd4d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd4d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd4d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd4d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fd4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4DCu;
        // 0x1fd4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD4E4u;
    // 0x1fd4e4: 0x0  nop
    ctx->pc = 0x1fd4e4u;
    // NOP
    ctx->pc = 0x1fd4e8u;
}
