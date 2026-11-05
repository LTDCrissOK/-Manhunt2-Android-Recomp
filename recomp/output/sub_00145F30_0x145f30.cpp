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

// Function: sub_00145F30
// Address: 0x145f30 - 0x145f90
void sub_00145F30_0x145f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145F30_0x145f30");
#endif

    switch (ctx->pc) {
        case 0x145f4cu: goto label_145f4c;
        case 0x145f54u: goto label_145f54;
        case 0x145f68u: goto label_145f68;
        default: break;
    }

    ctx->pc = 0x145f30u;

    // 0x145f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145f38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145f40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145f44: 0xc0518a2  jal         func_146288
    ctx->pc = 0x145F44u;
    SET_GPR_U32(ctx, 31, 0x145F4Cu);
    ctx->pc = 0x145F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F44u;
    // 0x145f48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146288u, 0x145F44u, 0x145F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F4Cu;
label_145f4c:
    // 0x145f4c: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x145F4Cu;
    SET_GPR_U32(ctx, 31, 0x145F54u);
    ctx->pc = 0x145F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F4Cu;
    // 0x145f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x145F4Cu, 0x145F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F54u;
label_145f54:
    // 0x145f54: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x145f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x145f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f5c: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x145f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x145f60: 0xc04d89a  jal         func_136268
    ctx->pc = 0x145F60u;
    SET_GPR_U32(ctx, 31, 0x145F68u);
    ctx->pc = 0x145F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F60u;
    // 0x145f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x145F60u, 0x145F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F68u;
label_145f68:
    // 0x145f68: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x145f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x145f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145f70: 0x9062078c  lbu         $v0, 0x78C($v1)
    ctx->pc = 0x145f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F078Cu));
    // 0x145f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145f78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145f7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145f80: 0xa062078c  sb          $v0, 0x78C($v1)
    ctx->pc = 0x145f80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F078Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F078Cu, _value); } while (0);
    // 0x145f84: 0x3e00008  jr          $ra
    ctx->pc = 0x145F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F84u;
        // 0x145f88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145F8Cu;
    // 0x145f8c: 0x0  nop
    ctx->pc = 0x145f8cu;
    // NOP
    ctx->pc = 0x145f90u;
}
