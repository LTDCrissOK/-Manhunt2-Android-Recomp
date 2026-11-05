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

// Function: sub_00173300
// Address: 0x173300 - 0x1733d0
void sub_00173300_0x173300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173300_0x173300");
#endif

    switch (ctx->pc) {
        case 0x173340u: goto label_173340;
        case 0x173350u: goto label_173350;
        case 0x17336cu: goto label_17336c;
        case 0x173378u: goto label_173378;
        case 0x1733a4u: goto label_1733a4;
        default: break;
    }

    ctx->pc = 0x173300u;

    // 0x173300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x173304: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x173304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173308: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x173308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17330c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x173310: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x173310u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173314: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x173314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x173318: 0x26d400e0  addiu       $s4, $s6, 0xE0
    ctx->pc = 0x173318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x17331c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x173320: 0x3c150049  lui         $s5, 0x49
    ctx->pc = 0x173320u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)73 << 16));
    // 0x173324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173328: 0x24170024  addiu       $s7, $zero, 0x24
    ctx->pc = 0x173328u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17332c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173330: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173334: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x173338: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17333c: 0x779018  mult        $s2, $v1, $s7
    ctx->pc = 0x17333cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_173340:
    // 0x173340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173344: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x173344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173348: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17334c: 0x0  nop
    ctx->pc = 0x17334cu;
    // NOP
label_173350:
    // 0x173350: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x173350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173354: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x173354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173358: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x173358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17335c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17335Cu;
    {
        const bool branch_taken_0x17335c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x173360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17335Cu;
        // 0x173360: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17335c) {
            ctx->pc = 0x17337Cu;
            goto label_17337c;
        }
    }
    ctx->pc = 0x173364u;
    // 0x173364: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x173364u;
    SET_GPR_U32(ctx, 31, 0x17336Cu);
    ctx->pc = 0x173368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173364u;
    // 0x173368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x173364u, 0x17336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17336Cu;
label_17336c:
    // 0x17336c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17336cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173370: 0xc042128  jal         func_1084A0
    ctx->pc = 0x173370u;
    SET_GPR_U32(ctx, 31, 0x173378u);
    ctx->pc = 0x173374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173370u;
    // 0x173374: 0x26a48758  addiu       $a0, $s5, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x173370u, 0x173378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173378u;
label_173378:
    // 0x173378: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x173378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17337c:
    // 0x17337c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17337cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173380: 0x2e230009  sltiu       $v1, $s1, 0x9
    ctx->pc = 0x173380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x173384: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x173384u;
    {
        const bool branch_taken_0x173384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173384u;
        // 0x173388: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173384) {
            ctx->pc = 0x173350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173350;
        }
    }
    ctx->pc = 0x17338Cu;
    // 0x17338c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x17338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x173390: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x173390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x173394: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x173394u;
    {
        const bool branch_taken_0x173394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173394u;
        // 0x173398: 0x779018  mult        $s2, $v1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173394) {
            ctx->pc = 0x173340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173340;
        }
    }
    ctx->pc = 0x17339Cu;
    // 0x17339c: 0xc05cca4  jal         func_173290
    ctx->pc = 0x17339Cu;
    SET_GPR_U32(ctx, 31, 0x1733A4u);
    ctx->pc = 0x1733A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17339Cu;
    // 0x1733a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173290u, 0x17339Cu, 0x1733A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1733A4u;
label_1733a4:
    // 0x1733a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1733a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1733a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1733a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1733ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1733acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1733b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1733b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1733b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1733b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1733b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1733b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1733bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1733bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1733c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1733c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1733c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1733c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1733c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1733C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1733CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733C8u;
        // 0x1733cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1733D0u;
}
