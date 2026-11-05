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

// Function: sub_002C5480
// Address: 0x2c5480 - 0x2c54d0
void sub_002C5480_0x2c5480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5480_0x2c5480");
#endif

    switch (ctx->pc) {
        case 0x2c549cu: goto label_2c549c;
        default: break;
    }

    ctx->pc = 0x2c5480u;

    // 0x2c5480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c5488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c548c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5494: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C5494u;
    SET_GPR_U32(ctx, 31, 0x2C549Cu);
    ctx->pc = 0x2C5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5494u;
    // 0x2c5498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C5494u, 0x2C549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C549Cu;
label_2c549c:
    // 0x2c549c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c54a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c54a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c54a4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c54a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c54a8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c54a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c54ac: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2c54acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2c54b0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c54b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c54b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c54b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c54b8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2c54b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2c54bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c54bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c54c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C54C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54C0u;
        // 0x2c54c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C54C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C54C8u;
    // 0x2c54c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c54c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c54cc: 0x0  nop
    ctx->pc = 0x2c54ccu;
    // NOP
    ctx->pc = 0x2c54d0u;
}
