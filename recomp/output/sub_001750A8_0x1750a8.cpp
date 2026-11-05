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

// Function: sub_001750A8
// Address: 0x1750a8 - 0x175248
void sub_001750A8_0x1750a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001750A8_0x1750a8");
#endif

    switch (ctx->pc) {
        case 0x1750e0u: goto label_1750e0;
        case 0x17513cu: goto label_17513c;
        case 0x175170u: goto label_175170;
        case 0x1751c8u: goto label_1751c8;
        case 0x175200u: goto label_175200;
        default: break;
    }

    ctx->pc = 0x1750a8u;

    // 0x1750a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1750a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1750ac: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1750acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1750b0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1750b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1750b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1750b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750b8: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1750b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1750bc: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1750bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1750c0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1750c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1750c4: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1750c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1750c8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1750c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1750cc: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x1750ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x1750d0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1750d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1750d4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1750d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1750d8: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1750D8u;
    SET_GPR_U32(ctx, 31, 0x1750E0u);
    ctx->pc = 0x1750DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750D8u;
    // 0x1750dc: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1750D8u, 0x1750E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750E0u;
label_1750e0:
    // 0x1750e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1750e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750e4: 0x1260004b  beqz        $s3, . + 4 + (0x4B << 2)
    ctx->pc = 0x1750E4u;
    {
        const bool branch_taken_0x1750e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750E4u;
        // 0x1750e8: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750e4) {
            ctx->pc = 0x175214u;
            goto label_175214;
        }
    }
    ctx->pc = 0x1750ECu;
    // 0x1750ec: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1750ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1750f0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1750f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1750f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1750f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1750f8: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1750f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1750fc: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1750FCu;
    {
        const bool branch_taken_0x1750fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1750fc) {
            ctx->pc = 0x175100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1750FCu;
            // 0x175100: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175218u;
            goto label_175218;
        }
    }
    ctx->pc = 0x175104u;
    // 0x175104: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x175104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x175108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x175108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17510c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175110: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x175110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x175114: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x175114u;
    {
        const bool branch_taken_0x175114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175114) {
            ctx->pc = 0x175118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175114u;
            // 0x175118: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175124u;
            goto label_175124;
        }
    }
    ctx->pc = 0x17511Cu;
    // 0x17511c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17511Cu;
    {
        const bool branch_taken_0x17511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17511Cu;
        // 0x175120: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17511c) {
            ctx->pc = 0x17512Cu;
            goto label_17512c;
        }
    }
    ctx->pc = 0x175124u;
label_175124:
    // 0x175124: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175128: 0x24750070  addiu       $s5, $v1, 0x70
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17512c:
    // 0x17512c: 0x12a00039  beqz        $s5, . + 4 + (0x39 << 2)
    ctx->pc = 0x17512Cu;
    {
        const bool branch_taken_0x17512c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x175130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17512Cu;
        // 0x175130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17512c) {
            ctx->pc = 0x175214u;
            goto label_175214;
        }
    }
    ctx->pc = 0x175134u;
    // 0x175134: 0xc04f872  jal         func_13E1C8
    ctx->pc = 0x175134u;
    SET_GPR_U32(ctx, 31, 0x17513Cu);
    ctx->pc = 0x175138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175134u;
    // 0x175138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1C8u, 0x175134u, 0x17513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17513Cu;
label_17513c:
    // 0x17513c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17513cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175140: 0x52400035  beql        $s2, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x175140u;
    {
        const bool branch_taken_0x175140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x175140) {
            ctx->pc = 0x175144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175140u;
            // 0x175144: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175218u;
            goto label_175218;
        }
    }
    ctx->pc = 0x175148u;
    // 0x175148: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x175148u;
    {
        const bool branch_taken_0x175148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175148u;
        // 0x17514c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175148) {
            ctx->pc = 0x175214u;
            goto label_175214;
        }
    }
    ctx->pc = 0x175150u;
    // 0x175150: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x175150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x175154: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x175154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x175158: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x175158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17515c: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x17515cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x175160: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x175160u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x175164: 0x2696fefc  addiu       $s6, $s4, -0x104
    ctx->pc = 0x175164u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967036));
    // 0x175168: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17516c: 0x0  nop
    ctx->pc = 0x17516cu;
    // NOP
label_175170:
    // 0x175170: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x175170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x175174: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175178: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x175178u;
    {
        const bool branch_taken_0x175178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175178u;
        // 0x17517c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175178) {
            ctx->pc = 0x175200u;
            goto label_175200;
        }
    }
    ctx->pc = 0x175180u;
    // 0x175180: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x175180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x175184: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x175184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175188: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x175188u;
    {
        const bool branch_taken_0x175188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175188u;
        // 0x17518c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175188) {
            ctx->pc = 0x175204u;
            goto label_175204;
        }
    }
    ctx->pc = 0x175190u;
    // 0x175190: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x175190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x175194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x175194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x175198: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x175198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x17519c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1751a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1751A0u;
    {
        const bool branch_taken_0x1751a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1751a0) {
            ctx->pc = 0x1751A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1751A0u;
            // 0x1751a4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1751B0u;
            goto label_1751b0;
        }
    }
    ctx->pc = 0x1751A8u;
    // 0x1751a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1751A8u;
    {
        const bool branch_taken_0x1751a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751A8u;
        // 0x1751ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751a8) {
            ctx->pc = 0x1751B8u;
            goto label_1751b8;
        }
    }
    ctx->pc = 0x1751B0u;
label_1751b0:
    // 0x1751b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1751b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1751b4: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1751b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1751b8:
    // 0x1751b8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1751B8u;
    {
        const bool branch_taken_0x1751b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751B8u;
        // 0x1751bc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751b8) {
            ctx->pc = 0x175200u;
            goto label_175200;
        }
    }
    ctx->pc = 0x1751C0u;
    // 0x1751c0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1751C0u;
    SET_GPR_U32(ctx, 31, 0x1751C8u);
    ctx->pc = 0x1751C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751C0u;
    // 0x1751c4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1751C0u, 0x1751C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751C8u;
label_1751c8:
    // 0x1751c8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x1751c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1751cc: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x1751ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1751d0: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x1751d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1751d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1751d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1751d8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1751d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1751dc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1751dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1751e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1751e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1751e4: 0x0  nop
    ctx->pc = 0x1751e4u;
    // NOP
    // 0x1751e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1751E8u;
    {
        const bool branch_taken_0x1751e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1751ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751E8u;
        // 0x1751ec: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751e8) {
            ctx->pc = 0x175204u;
            goto label_175204;
        }
    }
    ctx->pc = 0x1751F0u;
    // 0x1751f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1751f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1751f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751f8: 0xc04445e  jal         func_111178
    ctx->pc = 0x1751F8u;
    SET_GPR_U32(ctx, 31, 0x175200u);
    ctx->pc = 0x1751FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751F8u;
    // 0x1751fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x1751F8u, 0x175200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175200u;
label_175200:
    // 0x175200: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x175200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_175204:
    // 0x175204: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x175204u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175208: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x175208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17520c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x17520Cu;
    {
        const bool branch_taken_0x17520c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17520Cu;
        // 0x175210: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17520c) {
            ctx->pc = 0x175170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175170;
        }
    }
    ctx->pc = 0x175214u;
label_175214:
    // 0x175214: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x175214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_175218:
    // 0x175218: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x175218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x17521c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x17521cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x175220: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x175220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x175224: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x175224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x175228: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x175228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17522c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x17522cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x175230: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x175230u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x175234: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x175234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x175238: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x175238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17523c: 0x3e00008  jr          $ra
    ctx->pc = 0x17523Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17523Cu;
        // 0x175240: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17523Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175244u;
    // 0x175244: 0x0  nop
    ctx->pc = 0x175244u;
    // NOP
    ctx->pc = 0x175248u;
}
