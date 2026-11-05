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

// Function: sub_002AC170
// Address: 0x2ac170 - 0x2ac210
void sub_002AC170_0x2ac170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC170_0x2ac170");
#endif

    switch (ctx->pc) {
        case 0x2ac18cu: goto label_2ac18c;
        case 0x2ac198u: goto label_2ac198;
        case 0x2ac1a4u: goto label_2ac1a4;
        case 0x2ac1b0u: goto label_2ac1b0;
        case 0x2ac1bcu: goto label_2ac1bc;
        case 0x2ac1c8u: goto label_2ac1c8;
        case 0x2ac1d4u: goto label_2ac1d4;
        case 0x2ac1e0u: goto label_2ac1e0;
        case 0x2ac1ecu: goto label_2ac1ec;
        case 0x2ac1f8u: goto label_2ac1f8;
        default: break;
    }

    ctx->pc = 0x2ac170u;

    // 0x2ac170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac17c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ac17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ac180: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac184: 0xc047f90  jal         func_11FE40
    ctx->pc = 0x2AC184u;
    SET_GPR_U32(ctx, 31, 0x2AC18Cu);
    ctx->pc = 0x2AC188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC184u;
    // 0x2ac188: 0x24849e60  addiu       $a0, $a0, -0x61A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE40u, 0x2AC184u, 0x2AC18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC18Cu;
label_2ac18c:
    // 0x2ac18c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac190: 0xc04b29c  jal         func_12CA70
    ctx->pc = 0x2AC190u;
    SET_GPR_U32(ctx, 31, 0x2AC198u);
    ctx->pc = 0x2AC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC190u;
    // 0x2ac194: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA70u, 0x2AC190u, 0x2AC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC198u;
label_2ac198:
    // 0x2ac198: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac19c: 0xc046582  jal         func_119608
    ctx->pc = 0x2AC19Cu;
    SET_GPR_U32(ctx, 31, 0x2AC1A4u);
    ctx->pc = 0x2AC1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC19Cu;
    // 0x2ac1a0: 0x248487a0  addiu       $a0, $a0, -0x7860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119608u, 0x2AC19Cu, 0x2AC1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1A4u;
label_2ac1a4:
    // 0x2ac1a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac1a8: 0xc046e76  jal         func_11B9D8
    ctx->pc = 0x2AC1A8u;
    SET_GPR_U32(ctx, 31, 0x2AC1B0u);
    ctx->pc = 0x2AC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1A8u;
    // 0x2ac1ac: 0x248499f0  addiu       $a0, $a0, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B9D8u, 0x2AC1A8u, 0x2AC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1B0u;
label_2ac1b0:
    // 0x2ac1b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac1b4: 0xc048444  jal         func_121110
    ctx->pc = 0x2AC1B4u;
    SET_GPR_U32(ctx, 31, 0x2AC1BCu);
    ctx->pc = 0x2AC1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1B4u;
    // 0x2ac1b8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121110u, 0x2AC1B4u, 0x2AC1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1BCu;
label_2ac1bc:
    // 0x2ac1bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac1c0: 0xc04ad0a  jal         func_12B428
    ctx->pc = 0x2AC1C0u;
    SET_GPR_U32(ctx, 31, 0x2AC1C8u);
    ctx->pc = 0x2AC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1C0u;
    // 0x2ac1c4: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B428u, 0x2AC1C0u, 0x2AC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1C8u;
label_2ac1c8:
    // 0x2ac1c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac1cc: 0xc0476dc  jal         func_11DB70
    ctx->pc = 0x2AC1CCu;
    SET_GPR_U32(ctx, 31, 0x2AC1D4u);
    ctx->pc = 0x2AC1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1CCu;
    // 0x2ac1d0: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB70u, 0x2AC1CCu, 0x2AC1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1D4u;
label_2ac1d4:
    // 0x2ac1d4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac1d8: 0xc041ce0  jal         func_107380
    ctx->pc = 0x2AC1D8u;
    SET_GPR_U32(ctx, 31, 0x2AC1E0u);
    ctx->pc = 0x2AC1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1D8u;
    // 0x2ac1dc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107380u, 0x2AC1D8u, 0x2AC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1E0u;
label_2ac1e0:
    // 0x2ac1e0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ac1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ac1e4: 0xc0ab10e  jal         func_2AC438
    ctx->pc = 0x2AC1E4u;
    SET_GPR_U32(ctx, 31, 0x2AC1ECu);
    ctx->pc = 0x2AC1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1E4u;
    // 0x2ac1e8: 0x24842408  addiu       $a0, $a0, 0x2408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC438u, 0x2AC1E4u, 0x2AC1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1ECu;
label_2ac1ec:
    // 0x2ac1ec: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ac1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ac1f0: 0xc0abb66  jal         func_2AED98
    ctx->pc = 0x2AC1F0u;
    SET_GPR_U32(ctx, 31, 0x2AC1F8u);
    ctx->pc = 0x2AC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC1F0u;
    // 0x2ac1f4: 0x24842448  addiu       $a0, $a0, 0x2448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED98u, 0x2AC1F0u, 0x2AC1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1F8u;
label_2ac1f8:
    // 0x2ac1f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ac1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ac1fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ac200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac204: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC204u;
        // 0x2ac208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC20Cu;
    // 0x2ac20c: 0x0  nop
    ctx->pc = 0x2ac20cu;
    // NOP
    ctx->pc = 0x2ac210u;
}
