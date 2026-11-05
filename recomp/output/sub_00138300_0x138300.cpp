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

// Function: sub_00138300
// Address: 0x138300 - 0x138370
void sub_00138300_0x138300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138300_0x138300");
#endif

    switch (ctx->pc) {
        case 0x138320u: goto label_138320;
        case 0x138330u: goto label_138330;
        case 0x138358u: goto label_138358;
        default: break;
    }

    ctx->pc = 0x138300u;

    // 0x138300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x138308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13830c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13830cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138310: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x138310u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x138314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x138314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x138318: 0xc04d97a  jal         func_1365E8
    ctx->pc = 0x138318u;
    SET_GPR_U32(ctx, 31, 0x138320u);
    ctx->pc = 0x13831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138318u;
    // 0x13831c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365E8u, 0x138318u, 0x138320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138320u;
label_138320:
    // 0x138320: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138320u;
    {
        const bool branch_taken_0x138320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138320u;
        // 0x138324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138320) {
            ctx->pc = 0x138358u;
            goto label_138358;
        }
    }
    ctx->pc = 0x138328u;
    // 0x138328: 0xc04d974  jal         func_1365D0
    ctx->pc = 0x138328u;
    SET_GPR_U32(ctx, 31, 0x138330u);
    ctx->pc = 0x13832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138328u;
    // 0x13832c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365D0u, 0x138328u, 0x138330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138330u;
label_138330:
    // 0x138330: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x138330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x138334: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x138334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138338: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x138338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13833c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13833cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138340: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138344: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x138344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x138348: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x138348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13834c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x13834cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x138350: 0xc0495c0  jal         func_125700
    ctx->pc = 0x138350u;
    SET_GPR_U32(ctx, 31, 0x138358u);
    ctx->pc = 0x138354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138350u;
    // 0x138354: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x138350u, 0x138358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138358u;
label_138358:
    // 0x138358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13835c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13835cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138364: 0x3e00008  jr          $ra
    ctx->pc = 0x138364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138364u;
        // 0x138368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13836Cu;
    // 0x13836c: 0x0  nop
    ctx->pc = 0x13836cu;
    // NOP
    ctx->pc = 0x138370u;
}
