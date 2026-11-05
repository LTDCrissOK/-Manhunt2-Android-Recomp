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

// Function: sub_003E2118
// Address: 0x3e2118 - 0x3e21b8
void sub_003E2118_0x3e2118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2118_0x3e2118");
#endif

    switch (ctx->pc) {
        case 0x3e2148u: goto label_3e2148;
        case 0x3e2154u: goto label_3e2154;
        case 0x3e216cu: goto label_3e216c;
        case 0x3e2178u: goto label_3e2178;
        case 0x3e2184u: goto label_3e2184;
        case 0x3e2198u: goto label_3e2198;
        default: break;
    }

    ctx->pc = 0x3e2118u;

    // 0x3e2118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e211c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e2124: 0x244231e8  addiu       $v0, $v0, 0x31E8
    ctx->pc = 0x3e2124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12776));
    // 0x3e2128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e212c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e212cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e2134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e2138: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e2138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e213c: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x3e213cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3e2140: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2140u;
    SET_GPR_U32(ctx, 31, 0x3E2148u);
    ctx->pc = 0x3E2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2140u;
    // 0x3e2144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2140u, 0x3E2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2148u;
label_3e2148:
    // 0x3e2148: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x3e2148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x3e214c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E214Cu;
    SET_GPR_U32(ctx, 31, 0x3E2154u);
    ctx->pc = 0x3E2150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E214Cu;
    // 0x3e2150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E214Cu, 0x3E2154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2154u;
label_3e2154:
    // 0x3e2154: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2158: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e2158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e215c: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e2160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e2160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e2164: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2164u;
    SET_GPR_U32(ctx, 31, 0x3E216Cu);
    ctx->pc = 0x3E2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2164u;
    // 0x3e2168: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2164u, 0x3E216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E216Cu;
label_3e216c:
    // 0x3e216c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e2170: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2170u;
    SET_GPR_U32(ctx, 31, 0x3E2178u);
    ctx->pc = 0x3E2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2170u;
    // 0x3e2174: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2170u, 0x3E2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2178u;
label_3e2178:
    // 0x3e2178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e217c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E217Cu;
    SET_GPR_U32(ctx, 31, 0x3E2184u);
    ctx->pc = 0x3E2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E217Cu;
    // 0x3e2180: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E217Cu, 0x3E2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2184u;
label_3e2184:
    // 0x3e2184: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e2184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e2188: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2188u;
    {
        const bool branch_taken_0x3e2188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2188u;
        // 0x3e218c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2188) {
            ctx->pc = 0x3E219Cu;
            goto label_3e219c;
        }
    }
    ctx->pc = 0x3E2190u;
    // 0x3e2190: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E2190u;
    SET_GPR_U32(ctx, 31, 0x3E2198u);
    ctx->pc = 0x3E2194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2190u;
    // 0x3e2194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E2190u, 0x3E2198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2198u;
label_3e2198:
    // 0x3e2198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e219c:
    // 0x3e219c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e219cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e21a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e21a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e21a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E21A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21A4u;
        // 0x3e21a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E21A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E21ACu;
    // 0x3e21ac: 0x0  nop
    ctx->pc = 0x3e21acu;
    // NOP
    // 0x3e21b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e21b4: 0x0  nop
    ctx->pc = 0x3e21b4u;
    // NOP
    ctx->pc = 0x3e21b8u;
}
