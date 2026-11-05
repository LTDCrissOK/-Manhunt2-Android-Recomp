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

// Function: sub_003A2208
// Address: 0x3a2208 - 0x3a2280
void sub_003A2208_0x3a2208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2208_0x3a2208");
#endif

    switch (ctx->pc) {
        case 0x3a2208u: goto label_3a2208;
        case 0x3a220cu: goto label_3a220c;
        case 0x3a2210u: goto label_3a2210;
        case 0x3a2214u: goto label_3a2214;
        case 0x3a2218u: goto label_3a2218;
        case 0x3a221cu: goto label_3a221c;
        case 0x3a2220u: goto label_3a2220;
        case 0x3a2224u: goto label_3a2224;
        case 0x3a2228u: goto label_3a2228;
        case 0x3a222cu: goto label_3a222c;
        case 0x3a2230u: goto label_3a2230;
        case 0x3a2234u: goto label_3a2234;
        case 0x3a2238u: goto label_3a2238;
        case 0x3a223cu: goto label_3a223c;
        case 0x3a2240u: goto label_3a2240;
        case 0x3a2244u: goto label_3a2244;
        case 0x3a2248u: goto label_3a2248;
        case 0x3a224cu: goto label_3a224c;
        case 0x3a2250u: goto label_3a2250;
        case 0x3a2254u: goto label_3a2254;
        case 0x3a2258u: goto label_3a2258;
        case 0x3a225cu: goto label_3a225c;
        case 0x3a2260u: goto label_3a2260;
        case 0x3a2264u: goto label_3a2264;
        case 0x3a2268u: goto label_3a2268;
        case 0x3a226cu: goto label_3a226c;
        case 0x3a2270u: goto label_3a2270;
        case 0x3a2274u: goto label_3a2274;
        case 0x3a2278u: goto label_3a2278;
        case 0x3a227cu: goto label_3a227c;
        default: break;
    }

    ctx->pc = 0x3a2208u;

label_3a2208:
    // 0x3a2208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a220c:
    // 0x3a220c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a2210:
    // 0x3a2210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a2214:
    // 0x3a2214: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_3a2218:
    if (ctx->pc == 0x3A2218u) {
        ctx->pc = 0x3A2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2214u;
        // 0x3a2218: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A221Cu;
        goto label_3a221c;
    }
    ctx->pc = 0x3A2214u;
    {
        const bool branch_taken_0x3a2214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2214u;
        // 0x3a2218: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2214) {
            ctx->pc = 0x3A2238u;
            goto label_3a2238;
        }
    }
    ctx->pc = 0x3A221Cu;
label_3a221c:
    // 0x3a221c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a221cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a2220:
    // 0x3a2220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2224:
    // 0x3a2224: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a2224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a2228:
    // 0x3a2228: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x3a2228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
label_3a222c:
    // 0x3a222c: 0x80e8688  j           func_3A1A20
label_3a2230:
    if (ctx->pc == 0x3A2230u) {
        ctx->pc = 0x3A2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A222Cu;
        // 0x3a2230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2234u;
        goto label_3a2234;
    }
    ctx->pc = 0x3A222Cu;
    ctx->pc = 0x3A2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A222Cu;
    // 0x3a2230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    sub_003A1A20_0x3a1a20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A2234u;
label_3a2234:
    // 0x3a2234: 0x0  nop
    ctx->pc = 0x3a2234u;
    // NOP
label_3a2238:
    // 0x3a2238: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a223c:
    // 0x3a223c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3a223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3a2240:
    // 0x3a2240: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3a2244:
    if (ctx->pc == 0x3A2244u) {
        ctx->pc = 0x3A2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2240u;
        // 0x3a2244: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2248u;
        goto label_3a2248;
    }
    ctx->pc = 0x3A2240u;
    {
        const bool branch_taken_0x3a2240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2240) {
            ctx->pc = 0x3A2244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2240u;
            // 0x3a2244: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2268u;
            goto label_3a2268;
        }
    }
    ctx->pc = 0x3A2248u;
label_3a2248:
    // 0x3a2248: 0x40f809  jalr        $v0
label_3a224c:
    if (ctx->pc == 0x3A224Cu) {
        ctx->pc = 0x3A224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2248u;
        // 0x3a224c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2250u;
        goto label_3a2250;
    }
    ctx->pc = 0x3A2248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2250u);
        ctx->pc = 0x3A224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2248u;
        // 0x3a224c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2248u, 0x3A2250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2250u;
label_3a2250:
    // 0x3a2250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2254:
    // 0x3a2254: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a2254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a2258:
    // 0x3a2258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a225c:
    // 0x3a225c: 0x80e8812  j           func_3A2048
label_3a2260:
    if (ctx->pc == 0x3A2260u) {
        ctx->pc = 0x3A2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A225Cu;
        // 0x3a2260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2264u;
        goto label_3a2264;
    }
    ctx->pc = 0x3A225Cu;
    ctx->pc = 0x3A2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A225Cu;
    // 0x3a2260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2048u;
    sub_003A2048_0x3a2048(rdram, ctx, runtime); return;
    ctx->pc = 0x3A2264u;
label_3a2264:
    // 0x3a2264: 0x0  nop
    ctx->pc = 0x3a2264u;
    // NOP
label_3a2268:
    // 0x3a2268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a226c:
    // 0x3a226c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a2270:
    // 0x3a2270: 0x2484c760  addiu       $a0, $a0, -0x38A0
    ctx->pc = 0x3a2270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
label_3a2274:
    // 0x3a2274: 0x80e8688  j           func_3A1A20
label_3a2278:
    if (ctx->pc == 0x3A2278u) {
        ctx->pc = 0x3A2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2274u;
        // 0x3a2278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A227Cu;
        goto label_3a227c;
    }
    ctx->pc = 0x3A2274u;
    ctx->pc = 0x3A2278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2274u;
    // 0x3a2278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    sub_003A1A20_0x3a1a20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A227Cu;
label_3a227c:
    // 0x3a227c: 0x0  nop
    ctx->pc = 0x3a227cu;
    // NOP
    ctx->pc = 0x3a2280u;
}
