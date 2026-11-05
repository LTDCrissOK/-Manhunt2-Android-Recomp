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

// Function: sub_001BC1A0
// Address: 0x1bc1a0 - 0x1bc278
void sub_001BC1A0_0x1bc1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC1A0_0x1bc1a0");
#endif

    switch (ctx->pc) {
        case 0x1bc1a0u: goto label_1bc1a0;
        case 0x1bc1a4u: goto label_1bc1a4;
        case 0x1bc1a8u: goto label_1bc1a8;
        case 0x1bc1acu: goto label_1bc1ac;
        case 0x1bc1b0u: goto label_1bc1b0;
        case 0x1bc1b4u: goto label_1bc1b4;
        case 0x1bc1b8u: goto label_1bc1b8;
        case 0x1bc1bcu: goto label_1bc1bc;
        case 0x1bc1c0u: goto label_1bc1c0;
        case 0x1bc1c4u: goto label_1bc1c4;
        case 0x1bc1c8u: goto label_1bc1c8;
        case 0x1bc1ccu: goto label_1bc1cc;
        case 0x1bc1d0u: goto label_1bc1d0;
        case 0x1bc1d4u: goto label_1bc1d4;
        case 0x1bc1d8u: goto label_1bc1d8;
        case 0x1bc1dcu: goto label_1bc1dc;
        case 0x1bc1e0u: goto label_1bc1e0;
        case 0x1bc1e4u: goto label_1bc1e4;
        case 0x1bc1e8u: goto label_1bc1e8;
        case 0x1bc1ecu: goto label_1bc1ec;
        case 0x1bc1f0u: goto label_1bc1f0;
        case 0x1bc1f4u: goto label_1bc1f4;
        case 0x1bc1f8u: goto label_1bc1f8;
        case 0x1bc1fcu: goto label_1bc1fc;
        case 0x1bc200u: goto label_1bc200;
        case 0x1bc204u: goto label_1bc204;
        case 0x1bc208u: goto label_1bc208;
        case 0x1bc20cu: goto label_1bc20c;
        case 0x1bc210u: goto label_1bc210;
        case 0x1bc214u: goto label_1bc214;
        case 0x1bc218u: goto label_1bc218;
        case 0x1bc21cu: goto label_1bc21c;
        case 0x1bc220u: goto label_1bc220;
        case 0x1bc224u: goto label_1bc224;
        case 0x1bc228u: goto label_1bc228;
        case 0x1bc22cu: goto label_1bc22c;
        case 0x1bc230u: goto label_1bc230;
        case 0x1bc234u: goto label_1bc234;
        case 0x1bc238u: goto label_1bc238;
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc240u: goto label_1bc240;
        case 0x1bc244u: goto label_1bc244;
        case 0x1bc248u: goto label_1bc248;
        case 0x1bc24cu: goto label_1bc24c;
        case 0x1bc250u: goto label_1bc250;
        case 0x1bc254u: goto label_1bc254;
        case 0x1bc258u: goto label_1bc258;
        case 0x1bc25cu: goto label_1bc25c;
        case 0x1bc260u: goto label_1bc260;
        case 0x1bc264u: goto label_1bc264;
        case 0x1bc268u: goto label_1bc268;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc270u: goto label_1bc270;
        case 0x1bc274u: goto label_1bc274;
        default: break;
    }

    ctx->pc = 0x1bc1a0u;

label_1bc1a0:
    // 0x1bc1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bc1a4:
    // 0x1bc1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc1a8:
    // 0x1bc1a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1bc1ac:
    // 0x1bc1ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc1b0:
    // 0x1bc1b0: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x1bc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_1bc1b4:
    // 0x1bc1b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1bc1b8:
    if (ctx->pc == 0x1BC1B8u) {
        ctx->pc = 0x1BC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1B4u;
        // 0x1bc1b8: 0x260300d0  addiu       $v1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1BCu;
        goto label_1bc1bc;
    }
    ctx->pc = 0x1BC1B4u;
    {
        const bool branch_taken_0x1bc1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1B4u;
        // 0x1bc1b8: 0x260300d0  addiu       $v1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1b4) {
            ctx->pc = 0x1BC218u;
            goto label_1bc218;
        }
    }
    ctx->pc = 0x1BC1BCu;
label_1bc1bc:
    // 0x1bc1bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bc1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1bc1c0:
    // 0x1bc1c0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bc1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1bc1c4:
    // 0x1bc1c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bc1c8:
    if (ctx->pc == 0x1BC1C8u) {
        ctx->pc = 0x1BC1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1C4u;
        // 0x1bc1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1CCu;
        goto label_1bc1cc;
    }
    ctx->pc = 0x1BC1C4u;
    {
        const bool branch_taken_0x1bc1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1C4u;
        // 0x1bc1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1c4) {
            ctx->pc = 0x1BC1F0u;
            goto label_1bc1f0;
        }
    }
    ctx->pc = 0x1BC1CCu;
label_1bc1cc:
    // 0x1bc1cc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1bc1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1bc1d0:
    // 0x1bc1d0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1bc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1bc1d4:
    // 0x1bc1d4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1bc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bc1d8:
    // 0x1bc1d8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1bc1dc:
    if (ctx->pc == 0x1BC1DCu) {
        ctx->pc = 0x1BC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1D8u;
        // 0x1bc1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1E0u;
        goto label_1bc1e0;
    }
    ctx->pc = 0x1BC1D8u;
    {
        const bool branch_taken_0x1bc1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc1d8) {
            ctx->pc = 0x1BC1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC1D8u;
            // 0x1bc1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC1F0u;
            goto label_1bc1f0;
        }
    }
    ctx->pc = 0x1BC1E0u;
label_1bc1e0:
    // 0x1bc1e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1bc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1bc1e4:
    // 0x1bc1e4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bc1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1bc1e8:
    // 0x1bc1e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1bc1ec:
    if (ctx->pc == 0x1BC1ECu) {
        ctx->pc = 0x1BC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1E8u;
        // 0x1bc1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1F0u;
        goto label_1bc1f0;
    }
    ctx->pc = 0x1BC1E8u;
    {
        const bool branch_taken_0x1bc1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1e8) {
            ctx->pc = 0x1BC1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC1E8u;
            // 0x1bc1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC1F0u;
            goto label_1bc1f0;
        }
    }
    ctx->pc = 0x1BC1F0u;
label_1bc1f0:
    // 0x1bc1f0: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_1bc1f4:
    if (ctx->pc == 0x1BC1F4u) {
        ctx->pc = 0x1BC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1F0u;
        // 0x1bc1f4: 0x8e030394  lw          $v1, 0x394($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1F8u;
        goto label_1bc1f8;
    }
    ctx->pc = 0x1BC1F0u;
    {
        const bool branch_taken_0x1bc1f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1F0u;
        // 0x1bc1f4: 0x8e030394  lw          $v1, 0x394($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1f0) {
            ctx->pc = 0x1BC21Cu;
            goto label_1bc21c;
        }
    }
    ctx->pc = 0x1BC1F8u;
label_1bc1f8:
    // 0x1bc1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc1fc:
    // 0x1bc1fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1bc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1bc200:
    // 0x1bc200: 0x40f809  jalr        $v0
label_1bc204:
    if (ctx->pc == 0x1BC204u) {
        ctx->pc = 0x1BC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC200u;
        // 0x1bc204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC208u;
        goto label_1bc208;
    }
    ctx->pc = 0x1BC200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC208u);
        ctx->pc = 0x1BC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC200u;
        // 0x1bc204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC200u, 0x1BC208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC208u;
label_1bc208:
    // 0x1bc208: 0xc06f894  jal         func_1BE250
label_1bc20c:
    if (ctx->pc == 0x1BC20Cu) {
        ctx->pc = 0x1BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC208u;
        // 0x1bc20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC210u;
        goto label_1bc210;
    }
    ctx->pc = 0x1BC208u;
    SET_GPR_U32(ctx, 31, 0x1BC210u);
    ctx->pc = 0x1BC20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC208u;
    // 0x1bc20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x1BC208u, 0x1BC210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC210u;
label_1bc210:
    // 0x1bc210: 0x10000016  b           . + 4 + (0x16 << 2)
label_1bc214:
    if (ctx->pc == 0x1BC214u) {
        ctx->pc = 0x1BC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC210u;
        // 0x1bc214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC218u;
        goto label_1bc218;
    }
    ctx->pc = 0x1BC210u;
    {
        const bool branch_taken_0x1bc210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC210u;
        // 0x1bc214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc210) {
            ctx->pc = 0x1BC26Cu;
            goto label_1bc26c;
        }
    }
    ctx->pc = 0x1BC218u;
label_1bc218:
    // 0x1bc218: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1bc218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1bc21c:
    // 0x1bc21c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bc21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bc220:
    // 0x1bc220: 0x40f809  jalr        $v0
label_1bc224:
    if (ctx->pc == 0x1BC224u) {
        ctx->pc = 0x1BC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC220u;
        // 0x1bc224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC228u;
        goto label_1bc228;
    }
    ctx->pc = 0x1BC220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC228u);
        ctx->pc = 0x1BC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC220u;
        // 0x1bc224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC220u, 0x1BC228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC228u;
label_1bc228:
    // 0x1bc228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bc22c:
    if (ctx->pc == 0x1BC22Cu) {
        ctx->pc = 0x1BC230u;
        goto label_1bc230;
    }
    ctx->pc = 0x1BC228u;
    {
        const bool branch_taken_0x1bc228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc228) {
            ctx->pc = 0x1BC240u;
            goto label_1bc240;
        }
    }
    ctx->pc = 0x1BC230u;
label_1bc230:
    // 0x1bc230: 0xc06f09e  jal         func_1BC278
label_1bc234:
    if (ctx->pc == 0x1BC234u) {
        ctx->pc = 0x1BC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC230u;
        // 0x1bc234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC238u;
        goto label_1bc238;
    }
    ctx->pc = 0x1BC230u;
    SET_GPR_U32(ctx, 31, 0x1BC238u);
    ctx->pc = 0x1BC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC230u;
    // 0x1bc234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC278u, 0x1BC230u, 0x1BC238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC238u;
label_1bc238:
    // 0x1bc238: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bc23c:
    if (ctx->pc == 0x1BC23Cu) {
        ctx->pc = 0x1BC240u;
        goto label_1bc240;
    }
    ctx->pc = 0x1BC238u;
    {
        const bool branch_taken_0x1bc238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc238) {
            ctx->pc = 0x1BC248u;
            goto label_1bc248;
        }
    }
    ctx->pc = 0x1BC240u;
label_1bc240:
    // 0x1bc240: 0xc06f0ec  jal         func_1BC3B0
label_1bc244:
    if (ctx->pc == 0x1BC244u) {
        ctx->pc = 0x1BC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC240u;
        // 0x1bc244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC248u;
        goto label_1bc248;
    }
    ctx->pc = 0x1BC240u;
    SET_GPR_U32(ctx, 31, 0x1BC248u);
    ctx->pc = 0x1BC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC240u;
    // 0x1bc244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC3B0u, 0x1BC240u, 0x1BC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC248u;
label_1bc248:
    // 0x1bc248: 0xc06fc34  jal         func_1BF0D0
label_1bc24c:
    if (ctx->pc == 0x1BC24Cu) {
        ctx->pc = 0x1BC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC248u;
        // 0x1bc24c: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC250u;
        goto label_1bc250;
    }
    ctx->pc = 0x1BC248u;
    SET_GPR_U32(ctx, 31, 0x1BC250u);
    ctx->pc = 0x1BC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC248u;
    // 0x1bc24c: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BC248u, 0x1BC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC250u;
label_1bc250:
    // 0x1bc250: 0xc06fc34  jal         func_1BF0D0
label_1bc254:
    if (ctx->pc == 0x1BC254u) {
        ctx->pc = 0x1BC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC250u;
        // 0x1bc254: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC258u;
        goto label_1bc258;
    }
    ctx->pc = 0x1BC250u;
    SET_GPR_U32(ctx, 31, 0x1BC258u);
    ctx->pc = 0x1BC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC250u;
    // 0x1bc254: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BC250u, 0x1BC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC258u;
label_1bc258:
    // 0x1bc258: 0xc06fc34  jal         func_1BF0D0
label_1bc25c:
    if (ctx->pc == 0x1BC25Cu) {
        ctx->pc = 0x1BC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC258u;
        // 0x1bc25c: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC260u;
        goto label_1bc260;
    }
    ctx->pc = 0x1BC258u;
    SET_GPR_U32(ctx, 31, 0x1BC260u);
    ctx->pc = 0x1BC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC258u;
    // 0x1bc25c: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BC258u, 0x1BC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC260u;
label_1bc260:
    // 0x1bc260: 0xc06f894  jal         func_1BE250
label_1bc264:
    if (ctx->pc == 0x1BC264u) {
        ctx->pc = 0x1BC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC260u;
        // 0x1bc264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC268u;
        goto label_1bc268;
    }
    ctx->pc = 0x1BC260u;
    SET_GPR_U32(ctx, 31, 0x1BC268u);
    ctx->pc = 0x1BC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC260u;
    // 0x1bc264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x1BC260u, 0x1BC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC268u;
label_1bc268:
    // 0x1bc268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc26c:
    // 0x1bc26c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc270:
    // 0x1bc270: 0x3e00008  jr          $ra
label_1bc274:
    if (ctx->pc == 0x1BC274u) {
        ctx->pc = 0x1BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC270u;
        // 0x1bc274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC278u;
        goto label_fallthrough_0x1bc270;
    }
    ctx->pc = 0x1BC270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC270u;
        // 0x1bc274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bc270:
    ctx->pc = 0x1BC278u;
}
