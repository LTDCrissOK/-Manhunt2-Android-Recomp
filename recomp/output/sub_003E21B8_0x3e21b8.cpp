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

// Function: sub_003E21B8
// Address: 0x3e21b8 - 0x3e2270
void sub_003E21B8_0x3e21b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E21B8_0x3e21b8");
#endif

    switch (ctx->pc) {
        case 0x3e21e8u: goto label_3e21e8;
        case 0x3e2200u: goto label_3e2200;
        case 0x3e220cu: goto label_3e220c;
        case 0x3e2224u: goto label_3e2224;
        case 0x3e2230u: goto label_3e2230;
        case 0x3e223cu: goto label_3e223c;
        case 0x3e2250u: goto label_3e2250;
        default: break;
    }

    ctx->pc = 0x3e21b8u;

    // 0x3e21b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e21b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e21bc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e21c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e21c4: 0x244231b0  addiu       $v0, $v0, 0x31B0
    ctx->pc = 0x3e21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12720));
    // 0x3e21c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e21cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e21ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e21d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e21d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e21d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e21d8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e21dc: 0x2624008c  addiu       $a0, $s1, 0x8C
    ctx->pc = 0x3e21dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    // 0x3e21e0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E21E0u;
    SET_GPR_U32(ctx, 31, 0x3E21E8u);
    ctx->pc = 0x3E21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E21E0u;
    // 0x3e21e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E21E0u, 0x3E21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E21E8u;
label_3e21e8:
    // 0x3e21e8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e21ec: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x3e21ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3e21f0: 0x244231e8  addiu       $v0, $v0, 0x31E8
    ctx->pc = 0x3e21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12776));
    // 0x3e21f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e21f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e21f8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E21F8u;
    SET_GPR_U32(ctx, 31, 0x3E2200u);
    ctx->pc = 0x3E21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E21F8u;
    // 0x3e21fc: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E21F8u, 0x3E2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2200u;
label_3e2200:
    // 0x3e2200: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x3e2200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x3e2204: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2204u;
    SET_GPR_U32(ctx, 31, 0x3E220Cu);
    ctx->pc = 0x3E2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2204u;
    // 0x3e2208: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2204u, 0x3E220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E220Cu;
label_3e220c:
    // 0x3e220c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2210: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e2210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e2214: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e2214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e2218: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e2218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e221c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E221Cu;
    SET_GPR_U32(ctx, 31, 0x3E2224u);
    ctx->pc = 0x3E2220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E221Cu;
    // 0x3e2220: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E221Cu, 0x3E2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2224u;
label_3e2224:
    // 0x3e2224: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e2224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e2228: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2228u;
    SET_GPR_U32(ctx, 31, 0x3E2230u);
    ctx->pc = 0x3E222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2228u;
    // 0x3e222c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2228u, 0x3E2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2230u;
label_3e2230:
    // 0x3e2230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2234: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2234u;
    SET_GPR_U32(ctx, 31, 0x3E223Cu);
    ctx->pc = 0x3E2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2234u;
    // 0x3e2238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2234u, 0x3E223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E223Cu;
label_3e223c:
    // 0x3e223c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e223cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e2240: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2240u;
    {
        const bool branch_taken_0x3e2240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2240u;
        // 0x3e2244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2240) {
            ctx->pc = 0x3E2254u;
            goto label_3e2254;
        }
    }
    ctx->pc = 0x3E2248u;
    // 0x3e2248: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E2248u;
    SET_GPR_U32(ctx, 31, 0x3E2250u);
    ctx->pc = 0x3E224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2248u;
    // 0x3e224c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E2248u, 0x3E2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2250u;
label_3e2250:
    // 0x3e2250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2254:
    // 0x3e2254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e2258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e225c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E225Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E225Cu;
        // 0x3e2260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E225Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2264u;
    // 0x3e2264: 0x0  nop
    ctx->pc = 0x3e2264u;
    // NOP
    // 0x3e2268: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e2268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e226c: 0x0  nop
    ctx->pc = 0x3e226cu;
    // NOP
    ctx->pc = 0x3e2270u;
}
