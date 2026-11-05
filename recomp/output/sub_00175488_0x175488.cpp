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

// Function: sub_00175488
// Address: 0x175488 - 0x175518
void sub_00175488_0x175488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175488_0x175488");
#endif

    switch (ctx->pc) {
        case 0x175488u: goto label_175488;
        case 0x17548cu: goto label_17548c;
        case 0x175490u: goto label_175490;
        case 0x175494u: goto label_175494;
        case 0x175498u: goto label_175498;
        case 0x17549cu: goto label_17549c;
        case 0x1754a0u: goto label_1754a0;
        case 0x1754a4u: goto label_1754a4;
        case 0x1754a8u: goto label_1754a8;
        case 0x1754acu: goto label_1754ac;
        case 0x1754b0u: goto label_1754b0;
        case 0x1754b4u: goto label_1754b4;
        case 0x1754b8u: goto label_1754b8;
        case 0x1754bcu: goto label_1754bc;
        case 0x1754c0u: goto label_1754c0;
        case 0x1754c4u: goto label_1754c4;
        case 0x1754c8u: goto label_1754c8;
        case 0x1754ccu: goto label_1754cc;
        case 0x1754d0u: goto label_1754d0;
        case 0x1754d4u: goto label_1754d4;
        case 0x1754d8u: goto label_1754d8;
        case 0x1754dcu: goto label_1754dc;
        case 0x1754e0u: goto label_1754e0;
        case 0x1754e4u: goto label_1754e4;
        case 0x1754e8u: goto label_1754e8;
        case 0x1754ecu: goto label_1754ec;
        case 0x1754f0u: goto label_1754f0;
        case 0x1754f4u: goto label_1754f4;
        case 0x1754f8u: goto label_1754f8;
        case 0x1754fcu: goto label_1754fc;
        case 0x175500u: goto label_175500;
        case 0x175504u: goto label_175504;
        case 0x175508u: goto label_175508;
        case 0x17550cu: goto label_17550c;
        case 0x175510u: goto label_175510;
        case 0x175514u: goto label_175514;
        default: break;
    }

    ctx->pc = 0x175488u;

label_175488:
    // 0x175488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17548c:
    // 0x17548c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_175490:
    // 0x175490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175494:
    // 0x175494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_175498:
    // 0x175498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17549c:
    // 0x17549c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17549cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1754a0:
    // 0x1754a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1754a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1754a4:
    // 0x1754a4: 0xc05d5ca  jal         func_175728
label_1754a8:
    if (ctx->pc == 0x1754A8u) {
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754ACu;
        goto label_1754ac;
    }
    ctx->pc = 0x1754A4u;
    SET_GPR_U32(ctx, 31, 0x1754ACu);
    ctx->pc = 0x1754A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754A4u;
    // 0x1754a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175728u, 0x1754A4u, 0x1754ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754ACu;
label_1754ac:
    // 0x1754ac: 0xc04f8a2  jal         func_13E288
label_1754b0:
    if (ctx->pc == 0x1754B0u) {
        ctx->pc = 0x1754B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754ACu;
        // 0x1754b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754B4u;
        goto label_1754b4;
    }
    ctx->pc = 0x1754ACu;
    SET_GPR_U32(ctx, 31, 0x1754B4u);
    ctx->pc = 0x1754B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754ACu;
    // 0x1754b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E288u, 0x1754ACu, 0x1754B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754B4u;
label_1754b4:
    // 0x1754b4: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x1754b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_1754b8:
    // 0x1754b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1754bc:
    // 0x1754bc: 0xae120058  sw          $s2, 0x58($s0)
    ctx->pc = 0x1754bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 18));
label_1754c0:
    // 0x1754c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1754c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1754c4:
    // 0x1754c4: 0xc04f8c0  jal         func_13E300
label_1754c8:
    if (ctx->pc == 0x1754C8u) {
        ctx->pc = 0x1754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754C4u;
        // 0x1754c8: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754CCu;
        goto label_1754cc;
    }
    ctx->pc = 0x1754C4u;
    SET_GPR_U32(ctx, 31, 0x1754CCu);
    ctx->pc = 0x1754C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754C4u;
    // 0x1754c8: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E300u, 0x1754C4u, 0x1754CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754CCu;
label_1754cc:
    // 0x1754cc: 0xc04f92c  jal         func_13E4B0
label_1754d0:
    if (ctx->pc == 0x1754D0u) {
        ctx->pc = 0x1754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754CCu;
        // 0x1754d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754D4u;
        goto label_1754d4;
    }
    ctx->pc = 0x1754CCu;
    SET_GPR_U32(ctx, 31, 0x1754D4u);
    ctx->pc = 0x1754D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754CCu;
    // 0x1754d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E4B0u, 0x1754CCu, 0x1754D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754D4u;
label_1754d4:
    // 0x1754d4: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1754d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_1754d8:
    // 0x1754d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1754d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1754dc:
    // 0x1754dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1754dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1754e0:
    // 0x1754e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1754e4:
    // 0x1754e4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1754e8:
    // 0x1754e8: 0x40f809  jalr        $v0
label_1754ec:
    if (ctx->pc == 0x1754ECu) {
        ctx->pc = 0x1754ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754E8u;
        // 0x1754ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754F0u;
        goto label_1754f0;
    }
    ctx->pc = 0x1754E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1754F0u);
        ctx->pc = 0x1754ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754E8u;
        // 0x1754ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1754E8u, 0x1754F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1754F0u;
label_1754f0:
    // 0x1754f0: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1754f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1754f4:
    // 0x1754f4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1754f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1754f8:
    // 0x1754f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1754f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1754fc:
    // 0x1754fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1754fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_175500:
    // 0x175500: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_175504:
    // 0x175504: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x175504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_175508:
    // 0x175508: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x175508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
label_17550c:
    // 0x17550c: 0x3e00008  jr          $ra
label_175510:
    if (ctx->pc == 0x175510u) {
        ctx->pc = 0x175510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17550Cu;
        // 0x175510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175514u;
        goto label_175514;
    }
    ctx->pc = 0x17550Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17550Cu;
        // 0x175510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17550Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175514u;
label_175514:
    // 0x175514: 0x0  nop
    ctx->pc = 0x175514u;
    // NOP
    ctx->pc = 0x175518u;
}
