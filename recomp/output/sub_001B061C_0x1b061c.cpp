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

// Function: sub_001B061C
// Address: 0x1b061c - 0x1b0624
void sub_001B061C_0x1b061c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B061C_0x1b061c");
#endif

    ctx->pc = 0x1b061cu;

    // 0x1b061c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B061Cu;
    {
        const bool branch_taken_0x1b061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B061Cu;
        // 0x1b0620: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b061c) {
            ctx->pc = 0x1B0630u;
            return;
        }
    }
    ctx->pc = 0x1B0624u;
}
