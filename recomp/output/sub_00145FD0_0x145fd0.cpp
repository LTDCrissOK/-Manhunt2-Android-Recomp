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

// Function: sub_00145FD0
// Address: 0x145fd0 - 0x146070
void sub_00145FD0_0x145fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145FD0_0x145fd0");
#endif

    switch (ctx->pc) {
        case 0x145ff4u: goto label_145ff4;
        case 0x146000u: goto label_146000;
        case 0x146024u: goto label_146024;
        case 0x14603cu: goto label_14603c;
        case 0x146048u: goto label_146048;
        case 0x146058u: goto label_146058;
        default: break;
    }

    ctx->pc = 0x145fd0u;

    // 0x145fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fe0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x145fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145fe8: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x145fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x145fec: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x145FECu;
    SET_GPR_U32(ctx, 31, 0x145FF4u);
    ctx->pc = 0x145FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FECu;
    // 0x145ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x145FECu, 0x145FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FF4u;
label_145ff4:
    // 0x145ff4: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x145ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x145ff8: 0xc046002  jal         func_118008
    ctx->pc = 0x145FF8u;
    SET_GPR_U32(ctx, 31, 0x146000u);
    ctx->pc = 0x145FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FF8u;
    // 0x145ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x145FF8u, 0x146000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146000u;
label_146000:
    // 0x146000: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x146000u;
    {
        const bool branch_taken_0x146000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146000u;
        // 0x146004: 0xae020564  sw          $v0, 0x564($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146000) {
            ctx->pc = 0x146034u;
            goto label_146034;
        }
    }
    ctx->pc = 0x146008u;
    // 0x146008: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x146008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x14600c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14600cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146014: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x146014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x146018: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x146018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14601c: 0xc09c920  jal         func_272480
    ctx->pc = 0x14601Cu;
    SET_GPR_U32(ctx, 31, 0x146024u);
    ctx->pc = 0x146020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14601Cu;
    // 0x146020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272480u, 0x14601Cu, 0x146024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146024u;
label_146024:
    // 0x146024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146024u;
    {
        const bool branch_taken_0x146024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146024) {
            ctx->pc = 0x146034u;
            goto label_146034;
        }
    }
    ctx->pc = 0x14602Cu;
    // 0x14602c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x146030: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x146030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
label_146034:
    // 0x146034: 0xc0460e4  jal         func_118390
    ctx->pc = 0x146034u;
    SET_GPR_U32(ctx, 31, 0x14603Cu);
    ctx->pc = 0x146038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146034u;
    // 0x146038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x146034u, 0x14603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14603Cu;
label_14603c:
    // 0x14603c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146040: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x146040u;
    SET_GPR_U32(ctx, 31, 0x146048u);
    ctx->pc = 0x146044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146040u;
    // 0x146044: 0xae02056c  sw          $v0, 0x56C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x146040u, 0x146048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146048u;
label_146048:
    // 0x146048: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x146048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14604c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14604cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146050: 0xc042136  jal         func_1084D8
    ctx->pc = 0x146050u;
    SET_GPR_U32(ctx, 31, 0x146058u);
    ctx->pc = 0x146054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146050u;
    // 0x146054: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x146050u, 0x146058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146058u;
label_146058:
    // 0x146058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14605c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14605cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146064: 0x3e00008  jr          $ra
    ctx->pc = 0x146064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146064u;
        // 0x146068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14606Cu;
    // 0x14606c: 0x0  nop
    ctx->pc = 0x14606cu;
    // NOP
    ctx->pc = 0x146070u;
}
