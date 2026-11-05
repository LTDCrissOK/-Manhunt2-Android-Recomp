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

// Function: sub_00130108
// Address: 0x130108 - 0x130180
void sub_00130108_0x130108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130108_0x130108");
#endif

    switch (ctx->pc) {
        case 0x130138u: goto label_130138;
        case 0x13014cu: goto label_13014c;
        case 0x130154u: goto label_130154;
        case 0x13015cu: goto label_13015c;
        default: break;
    }

    ctx->pc = 0x130108u;

    // 0x130108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13010c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x130114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13011c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x130120: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x130120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130124: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x130124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x130128: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x130128u;
    {
        const bool branch_taken_0x130128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130128u;
        // 0x13012c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130128) {
            ctx->pc = 0x130164u;
            goto label_130164;
        }
    }
    ctx->pc = 0x130130u;
    // 0x130130: 0xc043920  jal         func_10E480
    ctx->pc = 0x130130u;
    SET_GPR_U32(ctx, 31, 0x130138u);
    ctx->pc = 0x130134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130130u;
    // 0x130134: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130130u, 0x130138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130138u;
label_130138:
    // 0x130138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13013c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13013Cu;
    {
        const bool branch_taken_0x13013c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13013Cu;
        // 0x130140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13013c) {
            ctx->pc = 0x130160u;
            goto label_130160;
        }
    }
    ctx->pc = 0x130144u;
    // 0x130144: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130144u;
    SET_GPR_U32(ctx, 31, 0x13014Cu);
    ctx->pc = 0x130148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130144u;
    // 0x130148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130144u, 0x13014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13014Cu;
label_13014c:
    // 0x13014c: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x13014Cu;
    SET_GPR_U32(ctx, 31, 0x130154u);
    ctx->pc = 0x130150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13014Cu;
    // 0x130150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x13014Cu, 0x130154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130154u;
label_130154:
    // 0x130154: 0xc095216  jal         func_254858
    ctx->pc = 0x130154u;
    SET_GPR_U32(ctx, 31, 0x13015Cu);
    ctx->pc = 0x130158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130154u;
    // 0x130158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x130154u, 0x13015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13015Cu;
label_13015c:
    // 0x13015c: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x13015cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_130160:
    // 0x130160: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x130160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_130164:
    // 0x130164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13016c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13016cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130170: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x130170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130174: 0x3e00008  jr          $ra
    ctx->pc = 0x130174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130174u;
        // 0x130178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13017Cu;
    // 0x13017c: 0x0  nop
    ctx->pc = 0x13017cu;
    // NOP
    ctx->pc = 0x130180u;
}
