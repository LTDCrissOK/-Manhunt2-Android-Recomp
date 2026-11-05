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

// Function: sub_00168300
// Address: 0x168300 - 0x168378
void sub_00168300_0x168300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168300_0x168300");
#endif

    switch (ctx->pc) {
        case 0x168344u: goto label_168344;
        case 0x168360u: goto label_168360;
        default: break;
    }

    ctx->pc = 0x168300u;

    // 0x168300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168304: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x168304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x168308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16830c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x168310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16831c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x16831cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x168320: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x168324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168328: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x168328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16832c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x168330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x168334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x168338: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16833c: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x16833Cu;
    SET_GPR_U32(ctx, 31, 0x168344u);
    ctx->pc = 0x168340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16833Cu;
    // 0x168340: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x16833Cu, 0x168344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168344u;
label_168344:
    // 0x168344: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x168344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x168348: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x168348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16834c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16834Cu;
    {
        const bool branch_taken_0x16834c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16834c) {
            ctx->pc = 0x168350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16834Cu;
            // 0x168350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168364u;
            goto label_168364;
        }
    }
    ctx->pc = 0x168354u;
    // 0x168354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168358: 0xc05a160  jal         func_168580
    ctx->pc = 0x168358u;
    SET_GPR_U32(ctx, 31, 0x168360u);
    ctx->pc = 0x16835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168358u;
    // 0x16835c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168580u, 0x168358u, 0x168360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168360u;
label_168360:
    // 0x168360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168364:
    // 0x168364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16836c: 0x3e00008  jr          $ra
    ctx->pc = 0x16836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16836Cu;
        // 0x168370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16836Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168374u;
    // 0x168374: 0x0  nop
    ctx->pc = 0x168374u;
    // NOP
    ctx->pc = 0x168378u;
}
