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

// Function: sub_002D30C0
// Address: 0x2d30c0 - 0x2d3150
void sub_002D30C0_0x2d30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D30C0_0x2d30c0");
#endif

    switch (ctx->pc) {
        case 0x2d30e0u: goto label_2d30e0;
        case 0x2d30f8u: goto label_2d30f8;
        case 0x2d3108u: goto label_2d3108;
        case 0x2d311cu: goto label_2d311c;
        case 0x2d312cu: goto label_2d312c;
        default: break;
    }

    ctx->pc = 0x2d30c0u;

    // 0x2d30c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d30c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d30c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d30c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d30c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d30c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d30cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d30ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d30d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d30d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d30d8: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x2D30D8u;
    SET_GPR_U32(ctx, 31, 0x2D30E0u);
    ctx->pc = 0x2D30DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30D8u;
    // 0x2d30dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x2D30D8u, 0x2D30E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30E0u;
label_2d30e0:
    // 0x2d30e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2d30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d30e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d30e8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D30E8u;
    {
        const bool branch_taken_0x2d30e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30E8u;
        // 0x2d30ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30e8) {
            ctx->pc = 0x2D3134u;
            goto label_2d3134;
        }
    }
    ctx->pc = 0x2D30F0u;
    // 0x2d30f0: 0xc0e52ae  jal         func_394AB8
    ctx->pc = 0x2D30F0u;
    SET_GPR_U32(ctx, 31, 0x2D30F8u);
    ctx->pc = 0x2D30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30F0u;
    // 0x2d30f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394AB8u, 0x2D30F0u, 0x2D30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30F8u;
label_2d30f8:
    // 0x2d30f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D30F8u;
    {
        const bool branch_taken_0x2d30f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30f8) {
            ctx->pc = 0x2D30FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D30F8u;
            // 0x2d30fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3138u;
            goto label_2d3138;
        }
    }
    ctx->pc = 0x2D3100u;
    // 0x2d3100: 0xc0e53ce  jal         func_394F38
    ctx->pc = 0x2D3100u;
    SET_GPR_U32(ctx, 31, 0x2D3108u);
    ctx->pc = 0x2D3104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3100u;
    // 0x2d3104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F38u, 0x2D3100u, 0x2D3108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3108u;
label_2d3108:
    // 0x2d3108: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d3108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d310c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3110: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2d3110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d3114: 0xc0e4ffc  jal         func_393FF0
    ctx->pc = 0x2D3114u;
    SET_GPR_U32(ctx, 31, 0x2D311Cu);
    ctx->pc = 0x2D3118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3114u;
    // 0x2d3118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393FF0u, 0x2D3114u, 0x2D311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D311Cu;
label_2d311c:
    // 0x2d311c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D311Cu;
    {
        const bool branch_taken_0x2d311c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D311Cu;
        // 0x2d3120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d311c) {
            ctx->pc = 0x2D3138u;
            goto label_2d3138;
        }
    }
    ctx->pc = 0x2D3124u;
    // 0x2d3124: 0xc0b4c68  jal         func_2D31A0
    ctx->pc = 0x2D3124u;
    SET_GPR_U32(ctx, 31, 0x2D312Cu);
    ctx->pc = 0x2D3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3124u;
    // 0x2d3128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D31A0u, 0x2D3124u, 0x2D312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D312Cu;
label_2d312c:
    // 0x2d312c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D312Cu;
    {
        const bool branch_taken_0x2d312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D312Cu;
        // 0x2d3130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d312c) {
            ctx->pc = 0x2D3138u;
            goto label_2d3138;
        }
    }
    ctx->pc = 0x2D3134u;
label_2d3134:
    // 0x2d3134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3138:
    // 0x2d3138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d313c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d313cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3144: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3144u;
        // 0x2d3148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D314Cu;
    // 0x2d314c: 0x0  nop
    ctx->pc = 0x2d314cu;
    // NOP
    ctx->pc = 0x2d3150u;
}
