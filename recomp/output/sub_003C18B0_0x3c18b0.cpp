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

// Function: sub_003C18B0
// Address: 0x3c18b0 - 0x3c27a8
void sub_003C18B0_0x3c18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C18B0_0x3c18b0");
#endif

    switch (ctx->pc) {
        case 0x3c18f8u: goto label_3c18f8;
        case 0x3c1960u: goto label_3c1960;
        case 0x3c19b8u: goto label_3c19b8;
        case 0x3c1a38u: goto label_3c1a38;
        case 0x3c1a70u: goto label_3c1a70;
        case 0x3c1a98u: goto label_3c1a98;
        case 0x3c1bb8u: goto label_3c1bb8;
        case 0x3c1bfcu: goto label_3c1bfc;
        case 0x3c1c9cu: goto label_3c1c9c;
        case 0x3c1cbcu: goto label_3c1cbc;
        case 0x3c1cecu: goto label_3c1cec;
        case 0x3c1cfcu: goto label_3c1cfc;
        case 0x3c1d14u: goto label_3c1d14;
        case 0x3c1d20u: goto label_3c1d20;
        case 0x3c1d2cu: goto label_3c1d2c;
        case 0x3c1db8u: goto label_3c1db8;
        case 0x3c1dd8u: goto label_3c1dd8;
        case 0x3c1e14u: goto label_3c1e14;
        case 0x3c1e4cu: goto label_3c1e4c;
        case 0x3c1e68u: goto label_3c1e68;
        case 0x3c1e6cu: goto label_3c1e6c;
        case 0x3c1ea0u: goto label_3c1ea0;
        case 0x3c1eb8u: goto label_3c1eb8;
        case 0x3c1f04u: goto label_3c1f04;
        case 0x3c1f98u: goto label_3c1f98;
        case 0x3c1fc8u: goto label_3c1fc8;
        case 0x3c1fe0u: goto label_3c1fe0;
        case 0x3c201cu: goto label_3c201c;
        case 0x3c202cu: goto label_3c202c;
        case 0x3c2040u: goto label_3c2040;
        case 0x3c204cu: goto label_3c204c;
        case 0x3c205cu: goto label_3c205c;
        case 0x3c2064u: goto label_3c2064;
        case 0x3c2068u: goto label_3c2068;
        case 0x3c2080u: goto label_3c2080;
        case 0x3c2088u: goto label_3c2088;
        case 0x3c2094u: goto label_3c2094;
        case 0x3c20b4u: goto label_3c20b4;
        case 0x3c20d8u: goto label_3c20d8;
        case 0x3c20e4u: goto label_3c20e4;
        case 0x3c20f4u: goto label_3c20f4;
        case 0x3c2104u: goto label_3c2104;
        case 0x3c21d8u: goto label_3c21d8;
        case 0x3c21e4u: goto label_3c21e4;
        case 0x3c21f4u: goto label_3c21f4;
        case 0x3c220cu: goto label_3c220c;
        case 0x3c2220u: goto label_3c2220;
        case 0x3c2284u: goto label_3c2284;
        case 0x3c22acu: goto label_3c22ac;
        case 0x3c22c4u: goto label_3c22c4;
        case 0x3c22dcu: goto label_3c22dc;
        case 0x3c2328u: goto label_3c2328;
        case 0x3c2334u: goto label_3c2334;
        case 0x3c2340u: goto label_3c2340;
        case 0x3c23d4u: goto label_3c23d4;
        case 0x3c23ecu: goto label_3c23ec;
        case 0x3c23f4u: goto label_3c23f4;
        case 0x3c23fcu: goto label_3c23fc;
        case 0x3c2410u: goto label_3c2410;
        case 0x3c241cu: goto label_3c241c;
        case 0x3c2428u: goto label_3c2428;
        case 0x3c2434u: goto label_3c2434;
        case 0x3c2460u: goto label_3c2460;
        case 0x3c2468u: goto label_3c2468;
        case 0x3c2474u: goto label_3c2474;
        case 0x3c24b4u: goto label_3c24b4;
        case 0x3c24d8u: goto label_3c24d8;
        case 0x3c250cu: goto label_3c250c;
        case 0x3c2520u: goto label_3c2520;
        case 0x3c252cu: goto label_3c252c;
        case 0x3c2538u: goto label_3c2538;
        case 0x3c2544u: goto label_3c2544;
        case 0x3c2554u: goto label_3c2554;
        case 0x3c2574u: goto label_3c2574;
        case 0x3c2588u: goto label_3c2588;
        case 0x3c2598u: goto label_3c2598;
        case 0x3c2644u: goto label_3c2644;
        case 0x3c2658u: goto label_3c2658;
        case 0x3c2668u: goto label_3c2668;
        case 0x3c267cu: goto label_3c267c;
        case 0x3c2694u: goto label_3c2694;
        case 0x3c26acu: goto label_3c26ac;
        case 0x3c26c4u: goto label_3c26c4;
        case 0x3c26d8u: goto label_3c26d8;
        case 0x3c26f0u: goto label_3c26f0;
        case 0x3c2724u: goto label_3c2724;
        case 0x3c2730u: goto label_3c2730;
        case 0x3c273cu: goto label_3c273c;
        case 0x3c2748u: goto label_3c2748;
        case 0x3c2754u: goto label_3c2754;
        case 0x3c2778u: goto label_3c2778;
        default: break;
    }

    ctx->pc = 0x3c18b0u;

    // 0x3c18b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3c18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3c18b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c18b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18b8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3c18b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3c18bc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3c18bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3c18c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c18c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18c4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3c18c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3c18c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18cc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3c18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3c18d0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3c18d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18d4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3c18d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3c18d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c18d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18dc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3c18dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3c18e0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3c18e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3c18e4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3c18e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3c18e8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3c18e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3c18ec: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3c18ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x3c18f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c18f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3c18f4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3c18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3c18f8:
    // 0x3c18f8: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3c18f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c18fc: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x3c18fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x3c1900: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C1900u;
    {
        const bool branch_taken_0x3c1900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1900u;
        // 0x3c1904: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1900) {
            ctx->pc = 0x3C194Cu;
            goto label_3c194c;
        }
    }
    ctx->pc = 0x3C1908u;
    // 0x3c1908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c1908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c190c: 0x244211e0  addiu       $v0, $v0, 0x11E0
    ctx->pc = 0x3c190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x3c1910: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c1910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c1914: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c1914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c1918: 0x800008  jr          $a0
    ctx->pc = 0x3C1918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C1920u: goto label_3c1920;
            case 0x3C1928u: goto label_3c1928;
            case 0x3C1940u: goto label_3c1940;
            case 0x3C1948u: goto label_3c1948;
            case 0x3C1B64u: goto label_3c1b64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1918u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C1920u;
label_3c1920:
    // 0x3c1920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c1924: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3c1924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3c1928:
    // 0x3c1928: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c192c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x3c192cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1930: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C1930u;
    {
        const bool branch_taken_0x3c1930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1930) {
            ctx->pc = 0x3C1934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1930u;
            // 0x3c1934: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C194Cu;
            goto label_3c194c;
        }
    }
    ctx->pc = 0x3C1938u;
    // 0x3c1938: 0x10000386  b           . + 4 + (0x386 << 2)
    ctx->pc = 0x3C1938u;
    {
        const bool branch_taken_0x3c1938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1938u;
        // 0x3c193c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1938) {
            ctx->pc = 0x3C2754u;
            goto label_3c2754;
        }
    }
    ctx->pc = 0x3C1940u;
label_3c1940:
    // 0x3c1940: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C1940u;
    {
        const bool branch_taken_0x3c1940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1940u;
        // 0x3c1944: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1940) {
            ctx->pc = 0x3C18F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c18f8;
        }
    }
    ctx->pc = 0x3C1948u;
label_3c1948:
    // 0x3c1948: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3c1948u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3c194c:
    // 0x3c194c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3c194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c1950: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C1950u;
    {
        const bool branch_taken_0x3c1950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1950u;
        // 0x3c1954: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1950) {
            ctx->pc = 0x3C1980u;
            goto label_3c1980;
        }
    }
    ctx->pc = 0x3C1958u;
    // 0x3c1958: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3c1958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c195c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3c195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3c1960:
    // 0x3c1960: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1960u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1964: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3c1964u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1968: 0x0  nop
    ctx->pc = 0x3c1968u;
    // NOP
    // 0x3c196c: 0x0  nop
    ctx->pc = 0x3c196cu;
    // NOP
    // 0x3c1970: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C1970u;
    {
        const bool branch_taken_0x3c1970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1970u;
        // 0x3c1974: 0x92a20000  lbu         $v0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1970) {
            ctx->pc = 0x3C1960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1960;
        }
    }
    ctx->pc = 0x3C1978u;
    // 0x3c1978: 0x10600376  beqz        $v1, . + 4 + (0x376 << 2)
    ctx->pc = 0x3C1978u;
    {
        const bool branch_taken_0x3c1978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1978u;
        // 0x3c197c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1978) {
            ctx->pc = 0x3C2754u;
            goto label_3c2754;
        }
    }
    ctx->pc = 0x3C1980u;
label_3c1980:
    // 0x3c1980: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3c1984: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x3c1984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x3c1988: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x3c1988u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3c198c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c198cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1990: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c1990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3c1994: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c1994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1998: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3c1998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3c199c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C199Cu;
    {
        const bool branch_taken_0x3c199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C199Cu;
        // 0x3c19a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c199c) {
            ctx->pc = 0x3C1A10u;
            goto label_3c1a10;
        }
    }
    ctx->pc = 0x3C19A4u;
    // 0x3c19a4: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3c19a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3c19a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C19A8u;
    {
        const bool branch_taken_0x3c19a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19A8u;
        // 0x3c19ac: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c19a8) {
            ctx->pc = 0x3C1A14u;
            goto label_3c1a14;
        }
    }
    ctx->pc = 0x3C19B0u;
    // 0x3c19b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c19b4: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x3c19b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_3c19b8:
    // 0x3c19b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C19B8u;
    {
        const bool branch_taken_0x3c19b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19B8u;
        // 0x3c19bc: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c19b8) {
            ctx->pc = 0x3C19D4u;
            goto label_3c19d4;
        }
    }
    ctx->pc = 0x3C19C0u;
    // 0x3c19c0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3c19c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3c19c4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3c19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3c19c8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3c19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3c19cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C19CCu;
    {
        const bool branch_taken_0x3c19cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19CCu;
        // 0x3c19d0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c19cc) {
            ctx->pc = 0x3C19F0u;
            goto label_3c19f0;
        }
    }
    ctx->pc = 0x3C19D4u;
label_3c19d4:
    // 0x3c19d4: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x3c19d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c19d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C19D8u;
    {
        const bool branch_taken_0x3c19d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19D8u;
        // 0x3c19dc: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c19d8) {
            ctx->pc = 0x3C19F0u;
            goto label_3c19f0;
        }
    }
    ctx->pc = 0x3C19E0u;
    // 0x3c19e0: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3c19e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3c19e4: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3c19e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3c19e8: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3c19e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3c19ec: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x3c19ecu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_3c19f0:
    // 0x3c19f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c19f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c19f4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c19f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c19f8: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3c19f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3c19fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C19FCu;
    {
        const bool branch_taken_0x3c19fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19FCu;
        // 0x3c1a00: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c19fc) {
            ctx->pc = 0x3C1A10u;
            goto label_3c1a10;
        }
    }
    ctx->pc = 0x3C1A04u;
    // 0x3c1a04: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3c1a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3c1a08: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3C1A08u;
    {
        const bool branch_taken_0x3c1a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A08u;
        // 0x3c1a0c: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a08) {
            ctx->pc = 0x3C19B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c19b8;
        }
    }
    ctx->pc = 0x3C1A10u;
label_3c1a10:
    // 0x3c1a10: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x3c1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_3c1a14:
    // 0x3c1a14: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3C1A14u;
    {
        const bool branch_taken_0x3c1a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A14u;
        // 0x3c1a18: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a14) {
            ctx->pc = 0x3C1B34u;
            goto label_3c1b34;
        }
    }
    ctx->pc = 0x3C1A1Cu;
    // 0x3c1a1c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1a1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1a20: 0x16800040  bnez        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x3C1A20u;
    {
        const bool branch_taken_0x3c1a20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A20u;
        // 0x3c1a24: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a20) {
            ctx->pc = 0x3C1B24u;
            goto label_3c1b24;
        }
    }
    ctx->pc = 0x3C1A28u;
    // 0x3c1a28: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3c1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c1a2c: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1A2Cu;
    {
        const bool branch_taken_0x3c1a2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1a2c) {
            ctx->pc = 0x3C1A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1A2Cu;
            // 0x3c1a30: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1A54u;
            goto label_3c1a54;
        }
    }
    ctx->pc = 0x3C1A34u;
    // 0x3c1a34: 0x0  nop
    ctx->pc = 0x3c1a34u;
    // NOP
label_3c1a38:
    // 0x3c1a38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1a3c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c1a3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1a40: 0x0  nop
    ctx->pc = 0x3c1a40u;
    // NOP
    // 0x3c1a44: 0x0  nop
    ctx->pc = 0x3c1a44u;
    // NOP
    // 0x3c1a48: 0x1082fffb  beq         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C1A48u;
    {
        const bool branch_taken_0x3c1a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A48u;
        // 0x3c1a4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a48) {
            ctx->pc = 0x3C1A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1a38;
        }
    }
    ctx->pc = 0x3C1A50u;
    // 0x3c1a50: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x3c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_3c1a54:
    // 0x3c1a54: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3c1a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3c1a58: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3C1A58u;
    {
        const bool branch_taken_0x3c1a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A58u;
        // 0x3c1a5c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a58) {
            ctx->pc = 0x3C1B38u;
            goto label_3c1b38;
        }
    }
    ctx->pc = 0x3C1A60u;
    // 0x3c1a60: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3c1a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1a64: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x3c1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x3c1a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c1a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1a6c: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x3c1a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3c1a70:
    // 0x3c1a70: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x3c1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x3c1a74: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3C1A74u;
    {
        const bool branch_taken_0x3c1a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A74u;
        // 0x3c1a78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a74) {
            ctx->pc = 0x3C1B1Cu;
            goto label_3c1b1c;
        }
    }
    ctx->pc = 0x3C1A7Cu;
    // 0x3c1a7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3c1a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c1a80: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x3c1a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c1a84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C1A84u;
    {
        const bool branch_taken_0x3c1a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A84u;
        // 0x3c1a88: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a84) {
            ctx->pc = 0x3C1AD4u;
            goto label_3c1ad4;
        }
    }
    ctx->pc = 0x3C1A8Cu;
    // 0x3c1a8c: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x3c1a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3c1a90: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c1a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c1a94: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3c1a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a98:
    // 0x3c1a98: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3c1a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3c1a9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C1A9Cu;
    {
        const bool branch_taken_0x3c1a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A9Cu;
        // 0x3c1aa0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a9c) {
            ctx->pc = 0x3C1AB4u;
            goto label_3c1ab4;
        }
    }
    ctx->pc = 0x3C1AA4u;
    // 0x3c1aa4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3c1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c1aa8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3c1aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c1aac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C1AACu;
    {
        const bool branch_taken_0x3c1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AACu;
        // 0x3c1ab0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1aac) {
            ctx->pc = 0x3C1AC8u;
            goto label_3c1ac8;
        }
    }
    ctx->pc = 0x3C1AB4u;
label_3c1ab4:
    // 0x3c1ab4: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x3c1ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c1ab8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1AB8u;
    {
        const bool branch_taken_0x3c1ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AB8u;
        // 0x3c1abc: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ab8) {
            ctx->pc = 0x3C1AC8u;
            goto label_3c1ac8;
        }
    }
    ctx->pc = 0x3C1AC0u;
    // 0x3c1ac0: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3c1ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3c1ac4: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x3c1ac4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_3c1ac8:
    // 0x3c1ac8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c1ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3c1acc: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x3C1ACCu;
    {
        const bool branch_taken_0x3c1acc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ACCu;
        // 0x3c1ad0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1acc) {
            ctx->pc = 0x3C1A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1a98;
        }
    }
    ctx->pc = 0x3C1AD4u;
label_3c1ad4:
    // 0x3c1ad4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3c1ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1ad8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3c1ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3c1adc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C1ADCu;
    {
        const bool branch_taken_0x3c1adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ADCu;
        // 0x3c1ae0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1adc) {
            ctx->pc = 0x3C1B00u;
            goto label_3c1b00;
        }
    }
    ctx->pc = 0x3C1AE4u;
    // 0x3c1ae4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3c1ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c1ae8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3c1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c1aec: 0x800013  mtlo        $a0
    ctx->pc = 0x3c1aecu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x3c1af0: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x3c1af0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x3c1af4: 0x1812  mflo        $v1
    ctx->pc = 0x3c1af4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3c1af8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C1AF8u;
    {
        const bool branch_taken_0x3c1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AF8u;
        // 0x3c1afc: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1af8) {
            ctx->pc = 0x3C1B18u;
            goto label_3c1b18;
        }
    }
    ctx->pc = 0x3C1B00u;
label_3c1b00:
    // 0x3c1b00: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x3c1b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c1b04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1B04u;
    {
        const bool branch_taken_0x3c1b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B04u;
        // 0x3c1b08: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b04) {
            ctx->pc = 0x3C1B18u;
            goto label_3c1b18;
        }
    }
    ctx->pc = 0x3C1B0Cu;
    // 0x3c1b0c: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3c1b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3c1b10: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3c1b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3c1b14: 0x82902d  daddu       $s2, $a0, $v0
    ctx->pc = 0x3c1b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_3c1b18:
    // 0x3c1b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c1b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1b1c:
    // 0x3c1b1c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3c1b1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1b20: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c1b20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3c1b24:
    // 0x3c1b24: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x3c1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x3c1b28: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c1b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c1b2c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3C1B2Cu;
    {
        const bool branch_taken_0x3c1b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B2Cu;
        // 0x3c1b30: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b2c) {
            ctx->pc = 0x3C1A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1a70;
        }
    }
    ctx->pc = 0x3C1B34u;
label_3c1b34:
    // 0x3c1b34: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x3c1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3c1b38:
    // 0x3c1b38: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1B38u;
    {
        const bool branch_taken_0x3c1b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B38u;
        // 0x3c1b3c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b38) {
            ctx->pc = 0x3C1B4Cu;
            goto label_3c1b4c;
        }
    }
    ctx->pc = 0x3C1B40u;
    // 0x3c1b40: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x3c1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3c1b44: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3C1B44u;
    {
        const bool branch_taken_0x3c1b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1b44) {
            ctx->pc = 0x3C1C64u;
            goto label_3c1c64;
        }
    }
    ctx->pc = 0x3C1B4Cu;
label_3c1b4c:
    // 0x3c1b4c: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C1B4Cu;
    {
        const bool branch_taken_0x3c1b4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1b4c) {
            ctx->pc = 0x3C1B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1B4Cu;
            // 0x3c1b50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1B6Cu;
            goto label_3c1b6c;
        }
    }
    ctx->pc = 0x3C1B54u;
    // 0x3c1b54: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C1B54u;
    {
        const bool branch_taken_0x3c1b54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1b54) {
            ctx->pc = 0x3C1B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1B54u;
            // 0x3c1b58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1B6Cu;
            goto label_3c1b6c;
        }
    }
    ctx->pc = 0x3C1B5Cu;
    // 0x3c1b5c: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1B5Cu;
    {
        const bool branch_taken_0x3c1b5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1b5c) {
            ctx->pc = 0x3C1B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1B5Cu;
            // 0x3c1b60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1B6Cu;
            goto label_3c1b6c;
        }
    }
    ctx->pc = 0x3C1B64u;
label_3c1b64:
    // 0x3c1b64: 0x100002fb  b           . + 4 + (0x2FB << 2)
    ctx->pc = 0x3C1B64u;
    {
        const bool branch_taken_0x3c1b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B64u;
        // 0x3c1b68: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b64) {
            ctx->pc = 0x3C2754u;
            goto label_3c2754;
        }
    }
    ctx->pc = 0x3C1B6Cu;
label_3c1b6c:
    // 0x3c1b6c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1b70: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3c1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3c1b74: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c1b74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1b78: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C1B78u;
    {
        const bool branch_taken_0x3c1b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B78u;
        // 0x3c1b7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b78) {
            ctx->pc = 0x3C1B90u;
            goto label_3c1b90;
        }
    }
    ctx->pc = 0x3C1B80u;
    // 0x3c1b80: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c1b84: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C1B84u;
    {
        const bool branch_taken_0x3c1b84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B84u;
        // 0x3c1b88: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b84) {
            ctx->pc = 0x3C1B9Cu;
            goto label_3c1b9c;
        }
    }
    ctx->pc = 0x3C1B8Cu;
    // 0x3c1b8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3c1b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1b90:
    // 0x3c1b90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1b90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1b94: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c1b94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1b98: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x3c1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_3c1b9c:
    // 0x3c1b9c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c1b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c1ba0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C1BA0u;
    {
        const bool branch_taken_0x3c1ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BA0u;
        // 0x3c1ba4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ba0) {
            ctx->pc = 0x3C1C60u;
            goto label_3c1c60;
        }
    }
    ctx->pc = 0x3C1BA8u;
    // 0x3c1ba8: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C1BA8u;
    {
        const bool branch_taken_0x3c1ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1ba8) {
            ctx->pc = 0x3C1BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1BA8u;
            // 0x3c1bac: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1BD4u;
            goto label_3c1bd4;
        }
    }
    ctx->pc = 0x3C1BB0u;
    // 0x3c1bb0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1bb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1bb4: 0x0  nop
    ctx->pc = 0x3c1bb4u;
    // NOP
label_3c1bb8:
    // 0x3c1bb8: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c1bb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1bbc: 0x0  nop
    ctx->pc = 0x3c1bbcu;
    // NOP
    // 0x3c1bc0: 0x0  nop
    ctx->pc = 0x3c1bc0u;
    // NOP
    // 0x3c1bc4: 0x0  nop
    ctx->pc = 0x3c1bc4u;
    // NOP
    // 0x3c1bc8: 0x5082fffb  beql        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C1BC8u;
    {
        const bool branch_taken_0x3c1bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c1bc8) {
            ctx->pc = 0x3C1BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1BC8u;
            // 0x3c1bcc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1bb8;
        }
    }
    ctx->pc = 0x3C1BD0u;
    // 0x3c1bd0: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x3c1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_3c1bd4:
    // 0x3c1bd4: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3c1bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3c1bd8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C1BD8u;
    {
        const bool branch_taken_0x3c1bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BD8u;
        // 0x3c1bdc: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bd8) {
            ctx->pc = 0x3C1C58u;
            goto label_3c1c58;
        }
    }
    ctx->pc = 0x3C1BE0u;
    // 0x3c1be0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c1be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1be4: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x3c1be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x3c1be8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1be8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1bec: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c1becu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1bf0: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3c1bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3c1bf4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3C1BF4u;
    {
        const bool branch_taken_0x3c1bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BF4u;
        // 0x3c1bf8: 0x2a71023  subu        $v0, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bf4) {
            ctx->pc = 0x3C1C34u;
            goto label_3c1c34;
        }
    }
    ctx->pc = 0x3C1BFCu;
label_3c1bfc:
    // 0x3c1bfc: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3c1bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3c1c00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C1C00u;
    {
        const bool branch_taken_0x3c1c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C00u;
        // 0x3c1c04: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c00) {
            ctx->pc = 0x3C1C30u;
            goto label_3c1c30;
        }
    }
    ctx->pc = 0x3C1C08u;
    // 0x3c1c08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c1c08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c1c0c: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x3c1c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x3c1c10: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3c1c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3c1c14: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3c1c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3c1c18: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3c1c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3c1c1c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3c1c1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3c1c20: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x3c1c20u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x3c1c24: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x3c1c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3c1c28: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C1C28u;
    {
        const bool branch_taken_0x3c1c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C28u;
        // 0x3c1c2c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c28) {
            ctx->pc = 0x3C1BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1bfc;
        }
    }
    ctx->pc = 0x3C1C30u;
label_3c1c30:
    // 0x3c1c30: 0x2a71023  subu        $v0, $s5, $a3
    ctx->pc = 0x3c1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_3c1c34:
    // 0x3c1c34: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x3c1c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x3c1c38: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x3c1c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x3c1c3c: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x3c1c3cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1c40: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3c1c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3c1c44: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x3c1c44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x3c1c48: 0x7182f  dsubu       $v1, $zero, $a3
    ctx->pc = 0x3c1c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 7));
    // 0x3c1c4c: 0x68380b  movn        $a3, $v1, $t0
    ctx->pc = 0x3c1c4cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3c1c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1C50u;
    {
        const bool branch_taken_0x3c1c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C50u;
        // 0x3c1c54: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c50) {
            ctx->pc = 0x3C1C64u;
            goto label_3c1c64;
        }
    }
    ctx->pc = 0x3C1C58u;
label_3c1c58:
    // 0x3c1c58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C1C58u;
    {
        const bool branch_taken_0x3c1c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C58u;
        // 0x3c1c5c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c58) {
            ctx->pc = 0x3C1C64u;
            goto label_3c1c64;
        }
    }
    ctx->pc = 0x3C1C60u;
label_3c1c60:
    // 0x3c1c60: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3c1c60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c64:
    // 0x3c1c64: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1C64u;
    {
        const bool branch_taken_0x3c1c64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C64u;
        // 0x3c1c68: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c64) {
            ctx->pc = 0x3C1C78u;
            goto label_3c1c78;
        }
    }
    ctx->pc = 0x3C1C6Cu;
    // 0x3c1c6c: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x3c1c6cu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x3c1c70: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x3C1C70u;
    {
        const bool branch_taken_0x3c1c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C70u;
        // 0x3c1c74: 0xa6a80a  movz        $s5, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c70) {
            ctx->pc = 0x3C2754u;
            goto label_3c2754;
        }
    }
    ctx->pc = 0x3C1C78u;
label_3c1c78:
    // 0x3c1c78: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x3c1c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c1c7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3c1c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c1c80: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3c1c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c1c84: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x3c1c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x3c1c88: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x3c1c88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x3c1c8c: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x3c1c8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c1c90: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3c1c90u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3c1c94: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C1C94u;
    SET_GPR_U32(ctx, 31, 0x3C1C9Cu);
    ctx->pc = 0x3C1C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C94u;
    // 0x3c1c98: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C1C94u, 0x3C1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C9Cu;
label_3c1c9c:
    // 0x3c1c9c: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x3c1c9cu;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
    // 0x3c1ca0: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3c1ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c1ca4: 0x4e10006  bgez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C1CA4u;
    {
        const bool branch_taken_0x3c1ca4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CA4u;
        // 0x3c1ca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ca4) {
            ctx->pc = 0x3C1CC0u;
            goto label_3c1cc0;
        }
    }
    ctx->pc = 0x3C1CACu;
    // 0x3c1cac: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3c1cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3c1cb0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3c1cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3c1cb4: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C1CB4u;
    SET_GPR_U32(ctx, 31, 0x3C1CBCu);
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C1CB4u, 0x3C1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CBCu;
label_3c1cbc:
    // 0x3c1cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1cc0:
    // 0x3c1cc0: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x3c1cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c1cc4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C1CC4u;
    {
        const bool branch_taken_0x3c1cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CC4u;
        // 0x3c1cc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1cc4) {
            ctx->pc = 0x3C1D30u;
            goto label_3c1d30;
        }
    }
    ctx->pc = 0x3C1CCCu;
    // 0x3c1ccc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3c1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3c1cd0: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x3c1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x3c1cd4: 0x24631898  addiu       $v1, $v1, 0x1898
    ctx->pc = 0x3c1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6296));
    // 0x3c1cd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3c1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3c1cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c1ce0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c1ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1ce4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C1CE4u;
    SET_GPR_U32(ctx, 31, 0x3C1CECu);
    ctx->pc = 0x3C1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CE4u;
    // 0x3c1ce8: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C1CE4u, 0x3C1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CECu;
label_3c1cec:
    // 0x3c1cec: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C1CECu;
    {
        const bool branch_taken_0x3c1cec = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3C1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CECu;
        // 0x3c1cf0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1cec) {
            ctx->pc = 0x3C1D04u;
            goto label_3c1d04;
        }
    }
    ctx->pc = 0x3C1CF4u;
    // 0x3c1cf4: 0xc0f498c  jal         func_3D2630
    ctx->pc = 0x3C1CF4u;
    SET_GPR_U32(ctx, 31, 0x3C1CFCu);
    ctx->pc = 0x3C1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CF4u;
    // 0x3c1cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2630u, 0x3C1CF4u, 0x3C1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CFCu;
label_3c1cfc:
    // 0x3c1cfc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1CFCu;
    {
        const bool branch_taken_0x3c1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CFCu;
        // 0x3c1d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1cfc) {
            ctx->pc = 0x3C1D24u;
            goto label_3c1d24;
        }
    }
    ctx->pc = 0x3C1D04u;
label_3c1d04:
    // 0x3c1d04: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x3c1d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x3c1d08: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x3c1d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3c1d0c: 0xc0f498c  jal         func_3D2630
    ctx->pc = 0x3C1D0Cu;
    SET_GPR_U32(ctx, 31, 0x3C1D14u);
    ctx->pc = 0x3C1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D0Cu;
    // 0x3c1d10: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2630u, 0x3C1D0Cu, 0x3C1D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D14u;
label_3c1d14:
    // 0x3c1d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d18: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C1D18u;
    SET_GPR_U32(ctx, 31, 0x3C1D20u);
    ctx->pc = 0x3C1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D18u;
    // 0x3c1d1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C1D18u, 0x3C1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D20u;
label_3c1d20:
    // 0x3c1d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d24:
    // 0x3c1d24: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C1D24u;
    SET_GPR_U32(ctx, 31, 0x3C1D2Cu);
    ctx->pc = 0x3C1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D24u;
    // 0x3c1d28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C1D24u, 0x3C1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D2Cu;
label_3c1d2c:
    // 0x3c1d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d30:
    // 0x3c1d30: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x3c1d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c1d34: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3C1D34u;
    {
        const bool branch_taken_0x3c1d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D34u;
        // 0x3c1d38: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d34) {
            ctx->pc = 0x3C1E1Cu;
            goto label_3c1e1c;
        }
    }
    ctx->pc = 0x3C1D3Cu;
    // 0x3c1d3c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3c1d3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1d40: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
    ctx->pc = 0x3C1D40u;
    {
        const bool branch_taken_0x3c1d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D40u;
        // 0x3c1d44: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d40) {
            ctx->pc = 0x3C2758u;
            goto label_3c2758;
        }
    }
    ctx->pc = 0x3C1D48u;
    // 0x3c1d48: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3C1D48u;
    {
        const bool branch_taken_0x3c1d48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D48u;
        // 0x3c1d4c: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d48) {
            ctx->pc = 0x3C1DE0u;
            goto label_3c1de0;
        }
    }
    ctx->pc = 0x3C1D50u;
    // 0x3c1d50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1D50u;
    {
        const bool branch_taken_0x3c1d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D50u;
        // 0x3c1d54: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d50) {
            ctx->pc = 0x3C1D78u;
            goto label_3c1d78;
        }
    }
    ctx->pc = 0x3C1D58u;
    // 0x3c1d58: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c1d5c: 0x24421898  addiu       $v0, $v0, 0x1898
    ctx->pc = 0x3c1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6296));
    // 0x3c1d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d64: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3c1d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c1d68: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c1d68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c1d6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3c1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3c1d70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3C1D70u;
    {
        const bool branch_taken_0x3c1d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D70u;
        // 0x3c1d74: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d70) {
            ctx->pc = 0x3C1DD0u;
            goto label_3c1dd0;
        }
    }
    ctx->pc = 0x3C1D78u;
label_3c1d78:
    // 0x3c1d78: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c1d7c: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x3c1d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3c1d80: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x3c1d80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1d84: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x3c1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x3c1d88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3c1d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c1d8c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C1D8Cu;
    {
        const bool branch_taken_0x3c1d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D8Cu;
        // 0x3c1d90: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d8c) {
            ctx->pc = 0x3C1E20u;
            goto label_3c1e20;
        }
    }
    ctx->pc = 0x3C1D94u;
    // 0x3c1d94: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x3c1d94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x3c1d98: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3c1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3c1d9c: 0x26101898  addiu       $s0, $s0, 0x1898
    ctx->pc = 0x3c1d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6296));
    // 0x3c1da0: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x3c1da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x3c1da4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c1da8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1dac: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x3c1dacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c1db0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C1DB0u;
    SET_GPR_U32(ctx, 31, 0x3C1DB8u);
    ctx->pc = 0x3C1DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DB0u;
    // 0x3c1db4: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C1DB0u, 0x3C1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DB8u;
label_3c1db8:
    // 0x3c1db8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3c1db8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1dbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c1dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1dc0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3c1dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c1dc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c1dc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c1dc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3c1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3c1dcc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c1dd0:
    // 0x3c1dd0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C1DD0u;
    SET_GPR_U32(ctx, 31, 0x3C1DD8u);
    ctx->pc = 0x3C1DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DD0u;
    // 0x3c1dd4: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C1DD0u, 0x3C1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DD8u;
label_3c1dd8:
    // 0x3c1dd8: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x3C1DD8u;
    {
        const bool branch_taken_0x3c1dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DD8u;
        // 0x3c1ddc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1dd8) {
            ctx->pc = 0x3C2754u;
            goto label_3c2754;
        }
    }
    ctx->pc = 0x3C1DE0u;
label_3c1de0:
    // 0x3c1de0: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x3c1de0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1de4: 0x28e2ffea  slti        $v0, $a3, -0x16
    ctx->pc = 0x3c1de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x3c1de8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C1DE8u;
    {
        const bool branch_taken_0x3c1de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DE8u;
        // 0x3c1dec: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1de8) {
            ctx->pc = 0x3C1E20u;
            goto label_3c1e20;
        }
    }
    ctx->pc = 0x3C1DF0u;
    // 0x3c1df0: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3c1df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3c1df4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c1df4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c1df8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c1dfc: 0x24421898  addiu       $v0, $v0, 0x1898
    ctx->pc = 0x3c1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6296));
    // 0x3c1e00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3c1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3c1e04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c1e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e0c: 0xc0f5040  jal         func_3D4100
    ctx->pc = 0x3C1E0Cu;
    SET_GPR_U32(ctx, 31, 0x3C1E14u);
    ctx->pc = 0x3C1E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E0Cu;
    // 0x3c1e10: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x3C1E0Cu, 0x3C1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E14u;
label_3c1e14:
    // 0x3c1e14: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x3C1E14u;
    {
        const bool branch_taken_0x3c1e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E14u;
        // 0x3c1e18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e14) {
            ctx->pc = 0x3C2754u;
            goto label_3c2754;
        }
    }
    ctx->pc = 0x3C1E1Cu;
label_3c1e1c:
    // 0x3c1e1c: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x3c1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_3c1e20:
    // 0x3c1e20: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3c1e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3c1e24: 0x1a000050  blez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3C1E24u;
    {
        const bool branch_taken_0x3c1e24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E24u;
        // 0x3c1e28: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e24) {
            ctx->pc = 0x3C1F68u;
            goto label_3c1f68;
        }
    }
    ctx->pc = 0x3C1E2Cu;
    // 0x3c1e2c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C1E2Cu;
    {
        const bool branch_taken_0x3c1e2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E2Cu;
        // 0x3c1e30: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e2c) {
            ctx->pc = 0x3C1E50u;
            goto label_3c1e50;
        }
    }
    ctx->pc = 0x3C1E34u;
    // 0x3c1e34: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3c1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3c1e38: 0x24421898  addiu       $v0, $v0, 0x1898
    ctx->pc = 0x3c1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6296));
    // 0x3c1e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c1e44: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C1E44u;
    SET_GPR_U32(ctx, 31, 0x3C1E4Cu);
    ctx->pc = 0x3C1E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E44u;
    // 0x3c1e48: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C1E44u, 0x3C1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E4Cu;
label_3c1e4c:
    // 0x3c1e4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e50:
    // 0x3c1e50: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3c1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3c1e54: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3c1e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3c1e58: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3C1E58u;
    {
        const bool branch_taken_0x3c1e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E58u;
        // 0x3c1e5c: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e58) {
            ctx->pc = 0x3C209Cu;
            goto label_3c209c;
        }
    }
    ctx->pc = 0x3C1E60u;
    // 0x3c1e60: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1E60u;
    {
        const bool branch_taken_0x3c1e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1e60) {
            ctx->pc = 0x3C1E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1E60u;
            // 0x3c1e64: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1E88u;
            goto label_3c1e88;
        }
    }
    ctx->pc = 0x3C1E68u;
label_3c1e68:
    // 0x3c1e68: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3c1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3c1e6c:
    // 0x3c1e6c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3c1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3c1e70: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3c1e70u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x3c1e74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3c1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3c1e78: 0x14400227  bnez        $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x3C1E78u;
    {
        const bool branch_taken_0x3c1e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E78u;
        // 0x3c1e7c: 0xdc711838  ld          $s1, 0x1838($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 6200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e78) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C1E80u;
    // 0x3c1e80: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x3C1E80u;
    {
        const bool branch_taken_0x3c1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E80u;
        // 0x3c1e84: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e80) {
            ctx->pc = 0x3C2758u;
            goto label_3c2758;
        }
    }
    ctx->pc = 0x3C1E88u;
label_3c1e88:
    // 0x3c1e88: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
    ctx->pc = 0x3C1E88u;
    {
        const bool branch_taken_0x3c1e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E88u;
        // 0x3c1e8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e88) {
            ctx->pc = 0x3C209Cu;
            goto label_3c209c;
        }
    }
    ctx->pc = 0x3C1E90u;
    // 0x3c1e90: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3c1e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c1e94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C1E94u;
    {
        const bool branch_taken_0x3c1e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E94u;
        // 0x3c1e98: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e94) {
            ctx->pc = 0x3C1ED0u;
            goto label_3c1ed0;
        }
    }
    ctx->pc = 0x3C1E9Cu;
    // 0x3c1e9c: 0x26d21960  addiu       $s2, $s6, 0x1960
    ctx->pc = 0x3c1e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 6496));
label_3c1ea0:
    // 0x3c1ea0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3c1ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3c1ea4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C1EA4u;
    {
        const bool branch_taken_0x3c1ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1ea4) {
            ctx->pc = 0x3C1EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1EA4u;
            // 0x3c1ea8: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1EC0u;
            goto label_3c1ec0;
        }
    }
    ctx->pc = 0x3C1EACu;
    // 0x3c1eac: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x3c1eacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c1eb0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C1EB0u;
    SET_GPR_U32(ctx, 31, 0x3C1EB8u);
    ctx->pc = 0x3C1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1EB0u;
    // 0x3c1eb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C1EB0u, 0x3C1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EB8u;
label_3c1eb8:
    // 0x3c1eb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1ebc: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x3c1ebcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_3c1ec0:
    // 0x3c1ec0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3c1ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3c1ec4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3c1ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c1ec8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3C1EC8u;
    {
        const bool branch_taken_0x3c1ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EC8u;
        // 0x3c1ecc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ec8) {
            ctx->pc = 0x3C1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1ea0;
        }
    }
    ctx->pc = 0x3C1ED0u;
label_3c1ed0:
    // 0x3c1ed0: 0x26c41960  addiu       $a0, $s6, 0x1960
    ctx->pc = 0x3c1ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 6496));
    // 0x3c1ed4: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x3c1ed4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3c1ed8: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x3c1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x3c1edc: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x3c1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3c1ee0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c1ee4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3c1ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3c1ee8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3c1ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c1eec: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3c1eecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3c1ef0: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x3c1ef0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c1ef4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3c1ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3c1ef8: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x3c1ef8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3c1efc: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C1EFCu;
    SET_GPR_U32(ctx, 31, 0x3C1F04u);
    ctx->pc = 0x3C1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1EFCu;
    // 0x3c1f00: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C1EFCu, 0x3C1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1F04u;
label_3c1f04:
    // 0x3c1f04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1f08: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3c1f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3c1f0c: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x3c1f0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3c1f10: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x3c1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x3c1f14: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x3c1f14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c1f18: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x3c1f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3c1f1c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3C1F1Cu;
    {
        const bool branch_taken_0x3c1f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F1Cu;
        // 0x3c1f20: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f1c) {
            ctx->pc = 0x3C1E6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1e6c;
        }
    }
    ctx->pc = 0x3C1F24u;
    // 0x3c1f24: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x3c1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x3c1f28: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x3c1f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3c1f2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1F2Cu;
    {
        const bool branch_taken_0x3c1f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F2Cu;
        // 0x3c1f30: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f2c) {
            ctx->pc = 0x3C1F54u;
            goto label_3c1f54;
        }
    }
    ctx->pc = 0x3C1F34u;
    // 0x3c1f34: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x3c1f34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3c1f38: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x3c1f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x3c1f3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3c1f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3c1f40: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3c1f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3c1f44: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3c1f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3c1f48: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3c1f48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3c1f4c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3C1F4Cu;
    {
        const bool branch_taken_0x3c1f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F4Cu;
        // 0x3c1f50: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f4c) {
            ctx->pc = 0x3C209Cu;
            goto label_3c209c;
        }
    }
    ctx->pc = 0x3C1F54u;
label_3c1f54:
    // 0x3c1f54: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x3c1f54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3c1f58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3c1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3c1f5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c1f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c1f60: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3C1F60u;
    {
        const bool branch_taken_0x3c1f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F60u;
        // 0x3c1f64: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f60) {
            ctx->pc = 0x3C209Cu;
            goto label_3c209c;
        }
    }
    ctx->pc = 0x3C1F68u;
label_3c1f68:
    // 0x3c1f68: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3C1F68u;
    {
        const bool branch_taken_0x3c1f68 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F68u;
        // 0x3c1f6c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f68) {
            ctx->pc = 0x3C20A0u;
            goto label_3c20a0;
        }
    }
    ctx->pc = 0x3C1F70u;
    // 0x3c1f70: 0x108023  negu        $s0, $s0
    ctx->pc = 0x3c1f70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x3c1f74: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x3c1f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3c1f78: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C1F78u;
    {
        const bool branch_taken_0x3c1f78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F78u;
        // 0x3c1f7c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f78) {
            ctx->pc = 0x3C1F9Cu;
            goto label_3c1f9c;
        }
    }
    ctx->pc = 0x3C1F80u;
    // 0x3c1f80: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3c1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3c1f84: 0x24421898  addiu       $v0, $v0, 0x1898
    ctx->pc = 0x3c1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6296));
    // 0x3c1f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1f8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c1f90: 0xc0f5040  jal         func_3D4100
    ctx->pc = 0x3C1F90u;
    SET_GPR_U32(ctx, 31, 0x3C1F98u);
    ctx->pc = 0x3C1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1F90u;
    // 0x3c1f94: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x3C1F90u, 0x3C1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1F98u;
label_3c1f98:
    // 0x3c1f98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f9c:
    // 0x3c1f9c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3c1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3c1fa0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3c1fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3c1fa4: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3C1FA4u;
    {
        const bool branch_taken_0x3c1fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FA4u;
        // 0x3c1fa8: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1fa4) {
            ctx->pc = 0x3C209Cu;
            goto label_3c209c;
        }
    }
    ctx->pc = 0x3C1FACu;
    // 0x3c1fac: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x3c1facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3c1fb0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3C1FB0u;
    {
        const bool branch_taken_0x3c1fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FB0u;
        // 0x3c1fb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1fb0) {
            ctx->pc = 0x3C2064u;
            goto label_3c2064;
        }
    }
    ctx->pc = 0x3C1FB8u;
    // 0x3c1fb8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3c1fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c1fbc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C1FBCu;
    {
        const bool branch_taken_0x3c1fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FBCu;
        // 0x3c1fc0: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1fbc) {
            ctx->pc = 0x3C1FF8u;
            goto label_3c1ff8;
        }
    }
    ctx->pc = 0x3C1FC4u;
    // 0x3c1fc4: 0x26d21988  addiu       $s2, $s6, 0x1988
    ctx->pc = 0x3c1fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 6536));
label_3c1fc8:
    // 0x3c1fc8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3c1fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3c1fcc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C1FCCu;
    {
        const bool branch_taken_0x3c1fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1fcc) {
            ctx->pc = 0x3C1FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1FCCu;
            // 0x3c1fd0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1FE8u;
            goto label_3c1fe8;
        }
    }
    ctx->pc = 0x3C1FD4u;
    // 0x3c1fd4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x3c1fd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c1fd8: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C1FD8u;
    SET_GPR_U32(ctx, 31, 0x3C1FE0u);
    ctx->pc = 0x3C1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1FD8u;
    // 0x3c1fdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C1FD8u, 0x3C1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1FE0u;
label_3c1fe0:
    // 0x3c1fe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1fe4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x3c1fe4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_3c1fe8:
    // 0x3c1fe8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3c1fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3c1fec: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3c1fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c1ff0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3C1FF0u;
    {
        const bool branch_taken_0x3c1ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FF0u;
        // 0x3c1ff4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ff0) {
            ctx->pc = 0x3C1FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1fc8;
        }
    }
    ctx->pc = 0x3C1FF8u;
label_3c1ff8:
    // 0x3c1ff8: 0x26c21988  addiu       $v0, $s6, 0x1988
    ctx->pc = 0x3c1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6536));
    // 0x3c1ffc: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x3c1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3c2000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c2000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c2004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c2004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2008: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x3c2008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c200c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3c200cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2010: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c2010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2014: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C2014u;
    SET_GPR_U32(ctx, 31, 0x3C201Cu);
    ctx->pc = 0x3C2018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2014u;
    // 0x3c2018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C2014u, 0x3C201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C201Cu;
label_3c201c:
    // 0x3c201c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2024: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2024u;
    SET_GPR_U32(ctx, 31, 0x3C202Cu);
    ctx->pc = 0x3C2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2024u;
    // 0x3c2028: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2024u, 0x3C202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C202Cu;
label_3c202c:
    // 0x3c202c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C202Cu;
    {
        const bool branch_taken_0x3c202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C202Cu;
        // 0x3c2030: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c202c) {
            ctx->pc = 0x3C20A0u;
            goto label_3c20a0;
        }
    }
    ctx->pc = 0x3C2034u;
    // 0x3c2034: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c2034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2038: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C2038u;
    SET_GPR_U32(ctx, 31, 0x3C2040u);
    ctx->pc = 0x3C203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2038u;
    // 0x3c203c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C2038u, 0x3C2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2040u;
label_3c2040:
    // 0x3c2040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2044: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C2044u;
    SET_GPR_U32(ctx, 31, 0x3C204Cu);
    ctx->pc = 0x3C2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2044u;
    // 0x3c2048: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C2044u, 0x3C204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C204Cu;
label_3c204c:
    // 0x3c204c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2054: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2054u;
    SET_GPR_U32(ctx, 31, 0x3C205Cu);
    ctx->pc = 0x3C2058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2054u;
    // 0x3c2058: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2054u, 0x3C205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C205Cu;
label_3c205c:
    // 0x3c205c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3C205Cu;
    {
        const bool branch_taken_0x3c205c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C205Cu;
        // 0x3c2060: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c205c) {
            ctx->pc = 0x3C209Cu;
            goto label_3c209c;
        }
    }
    ctx->pc = 0x3C2064u;
label_3c2064:
    // 0x3c2064: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3c2064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3c2068:
    // 0x3c2068: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3c2068u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x3c206c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3c206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3c2070: 0x146001a9  bnez        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x3C2070u;
    {
        const bool branch_taken_0x3c2070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2070u;
        // 0x3c2074: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2070) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C2078u;
    // 0x3c2078: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x3C2078u;
    {
        const bool branch_taken_0x3c2078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2078u;
        // 0x3c207c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2078) {
            ctx->pc = 0x3C2758u;
            goto label_3c2758;
        }
    }
    ctx->pc = 0x3C2080u;
label_3c2080:
    // 0x3c2080: 0xc0f1fd0  jal         func_3C7F40
    ctx->pc = 0x3C2080u;
    SET_GPR_U32(ctx, 31, 0x3C2088u);
    ctx->pc = 0x3C2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2080u;
    // 0x3c2084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7F40u, 0x3C2080u, 0x3C2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2088u;
label_3c2088:
    // 0x3c2088: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c2088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c208c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C208Cu;
    SET_GPR_U32(ctx, 31, 0x3C2094u);
    ctx->pc = 0x3C2090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C208Cu;
    // 0x3c2090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C208Cu, 0x3C2094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2094u;
label_3c2094:
    // 0x3c2094: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x3C2094u;
    {
        const bool branch_taken_0x3c2094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2094u;
        // 0x3c2098: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2094) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C209Cu;
label_3c209c:
    // 0x3c209c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3c209cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3c20a0:
    // 0x3c20a0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3c20a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c20a4: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x3c20a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c20a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c20a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c20ac: 0xc0f1d8c  jal         func_3C7630
    ctx->pc = 0x3C20ACu;
    SET_GPR_U32(ctx, 31, 0x3C20B4u);
    ctx->pc = 0x3C20B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C20ACu;
    // 0x3c20b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7630u, 0x3C20ACu, 0x3C20B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C20B4u;
label_3c20b4:
    // 0x3c20b4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3c20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x3c20b8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3c20b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c20bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c20bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c20c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3c20c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3c20c4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x3c20c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3c20c8: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x3c20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x3c20cc: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x3C20CCu;
    {
        const bool branch_taken_0x3c20cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20CCu;
        // 0x3c20d0: 0xafa70048  sw          $a3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c20cc) {
            ctx->pc = 0x3C2544u;
            goto label_3c2544;
        }
    }
    ctx->pc = 0x3C20D4u;
    // 0x3c20d4: 0x0  nop
    ctx->pc = 0x3c20d4u;
    // NOP
label_3c20d8:
    // 0x3c20d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c20d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c20dc: 0xc0f1efc  jal         func_3C7BF0
    ctx->pc = 0x3C20DCu;
    SET_GPR_U32(ctx, 31, 0x3C20E4u);
    ctx->pc = 0x3C20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C20DCu;
    // 0x3c20e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7BF0u, 0x3C20DCu, 0x3C20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C20E4u;
label_3c20e4:
    // 0x3c20e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3c20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3c20e8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3c20e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3c20ec: 0xc0f1f52  jal         func_3C7D48
    ctx->pc = 0x3C20ECu;
    SET_GPR_U32(ctx, 31, 0x3C20F4u);
    ctx->pc = 0x3C20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C20ECu;
    // 0x3c20f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7D48u, 0x3C20ECu, 0x3C20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C20F4u;
label_3c20f4:
    // 0x3c20f4: 0x1c40001e  bgtz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C20F4u;
    {
        const bool branch_taken_0x3c20f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20F4u;
        // 0x3c20f8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c20f4) {
            ctx->pc = 0x3C2170u;
            goto label_3c2170;
        }
    }
    ctx->pc = 0x3C20FCu;
    // 0x3c20fc: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x3C20FCu;
    {
        const bool branch_taken_0x3c20fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c20fc) {
            ctx->pc = 0x3C271Cu;
            goto label_3c271c;
        }
    }
    ctx->pc = 0x3C2104u;
label_3c2104:
    // 0x3c2104: 0x14e0003f  bnez        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x3C2104u;
    {
        const bool branch_taken_0x3c2104 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2104u;
        // 0x3c2108: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2104) {
            ctx->pc = 0x3C2204u;
            goto label_3c2204;
        }
    }
    ctx->pc = 0x3C210Cu;
    // 0x3c210c: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C210Cu;
    {
        const bool branch_taken_0x3c210c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c210c) {
            ctx->pc = 0x3C215Cu;
            goto label_3c215c;
        }
    }
    ctx->pc = 0x3C2114u;
    // 0x3c2114: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c2114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2118: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x3c2118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x3c211c: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x3c211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3c2120: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C2120u;
    {
        const bool branch_taken_0x3c2120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2120u;
        // 0x3c2124: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2120) {
            ctx->pc = 0x3C21B4u;
            goto label_3c21b4;
        }
    }
    ctx->pc = 0x3C2128u;
    // 0x3c2128: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x3c2128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3c212c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c212cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c2130: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3c2130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3c2134: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2138: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c2138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c213c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3c213cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3c2140: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x3c2140u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3c2144: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c2144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c2148: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3c2148u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3c214c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2150: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c2150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c2154: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x3C2154u;
    {
        const bool branch_taken_0x3c2154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2154u;
        // 0x3c2158: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2154) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C215Cu;
label_3c215c:
    // 0x3c215c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2160: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3c2160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3c2164: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3c2164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3c2168: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C2168u;
    {
        const bool branch_taken_0x3c2168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2168) {
            ctx->pc = 0x3C21B4u;
            goto label_3c21b4;
        }
    }
    ctx->pc = 0x3C2170u;
label_3c2170:
    // 0x3c2170: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x3c2170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3c2174: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3c2174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3c2178: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c217c: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x3c217cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x3c2180: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c2180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c2184: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3c2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2188: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3c2188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3c218c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c2190: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3c2190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3c2194: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3c2194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3c2198: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3c2198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3c219c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x3c219cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x3c21a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c21a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c21a4: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x3c21a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x3c21a8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3c21a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3c21ac: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x3C21ACu;
    {
        const bool branch_taken_0x3c21ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21ACu;
        // 0x3c21b0: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c21ac) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C21B4u;
label_3c21b4:
    // 0x3c21b4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3c21b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3c21b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c21b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c21bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c21bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c21c0: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x3C21C0u;
    {
        const bool branch_taken_0x3c21c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21C0u;
        // 0x3c21c4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c21c0) {
            ctx->pc = 0x3C271Cu;
            goto label_3c271c;
        }
    }
    ctx->pc = 0x3C21C8u;
    // 0x3c21c8: 0x1680ffad  bnez        $s4, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3C21C8u;
    {
        const bool branch_taken_0x3c21c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c21c8) {
            ctx->pc = 0x3C2080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2080;
        }
    }
    ctx->pc = 0x3C21D0u;
    // 0x3c21d0: 0xc0f1fd0  jal         func_3C7F40
    ctx->pc = 0x3C21D0u;
    SET_GPR_U32(ctx, 31, 0x3C21D8u);
    ctx->pc = 0x3C21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21D0u;
    // 0x3c21d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7F40u, 0x3C21D0u, 0x3C21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C21D8u;
label_3c21d8:
    // 0x3c21d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c21dc: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C21DCu;
    SET_GPR_U32(ctx, 31, 0x3C21E4u);
    ctx->pc = 0x3C21E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21DCu;
    // 0x3c21e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C21DCu, 0x3C21E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C21E4u;
label_3c21e4:
    // 0x3c21e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c21e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c21e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c21e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c21ec: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C21ECu;
    SET_GPR_U32(ctx, 31, 0x3C21F4u);
    ctx->pc = 0x3C21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21ECu;
    // 0x3c21f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C21ECu, 0x3C21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C21F4u;
label_3c21f4:
    // 0x3c21f4: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x3C21F4u;
    {
        const bool branch_taken_0x3c21f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21F4u;
        // 0x3c21f8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c21f4) {
            ctx->pc = 0x3C2064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2064;
        }
    }
    ctx->pc = 0x3C21FCu;
    // 0x3c21fc: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x3C21FCu;
    {
        const bool branch_taken_0x3c21fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c21fc) {
            ctx->pc = 0x3C271Cu;
            goto label_3c271c;
        }
    }
    ctx->pc = 0x3C2204u;
label_3c2204:
    // 0x3c2204: 0xc0f20c8  jal         func_3C8320
    ctx->pc = 0x3C2204u;
    SET_GPR_U32(ctx, 31, 0x3C220Cu);
    ctx->pc = 0x3C2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2204u;
    // 0x3c2208: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8320u, 0x3C2204u, 0x3C220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C220Cu;
label_3c220c:
    // 0x3c220c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c220cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2210: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3c2210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3c2214: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3c2214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3c2218: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2218u;
    SET_GPR_U32(ctx, 31, 0x3C2220u);
    ctx->pc = 0x3C221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2218u;
    // 0x3c221c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2218u, 0x3C2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2220u;
label_3c2220:
    // 0x3c2220: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C2220u;
    {
        const bool branch_taken_0x3c2220 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c2220) {
            ctx->pc = 0x3C22B4u;
            goto label_3c22b4;
        }
    }
    ctx->pc = 0x3C2228u;
    // 0x3c2228: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2228u;
    {
        const bool branch_taken_0x3c2228 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2228) {
            ctx->pc = 0x3C2240u;
            goto label_3c2240;
        }
    }
    ctx->pc = 0x3C2230u;
    // 0x3c2230: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3c2230u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c2234: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3c2234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3c2238: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3C2238u;
    {
        const bool branch_taken_0x3c2238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2238u;
        // 0x3c223c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2238) {
            ctx->pc = 0x3C22E0u;
            goto label_3c22e0;
        }
    }
    ctx->pc = 0x3C2240u;
label_3c2240:
    // 0x3c2240: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2244: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3c2244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3c2248: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3c2248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3c224c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C224Cu;
    {
        const bool branch_taken_0x3c224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C224Cu;
        // 0x3c2250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c224c) {
            ctx->pc = 0x3C2274u;
            goto label_3c2274;
        }
    }
    ctx->pc = 0x3C2254u;
    // 0x3c2254: 0x1222ff84  beq         $s1, $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x3C2254u;
    {
        const bool branch_taken_0x3c2254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2254u;
        // 0x3c2258: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2254) {
            ctx->pc = 0x3C2068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2068;
        }
    }
    ctx->pc = 0x3C225Cu;
    // 0x3c225c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3c225cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c2260: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3c2260u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3c2264: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x3c2264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3c2268: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x3c2268u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3c226c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3C226Cu;
    {
        const bool branch_taken_0x3c226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c226c) {
            ctx->pc = 0x3C22E0u;
            goto label_3c22e0;
        }
    }
    ctx->pc = 0x3C2274u;
label_3c2274:
    // 0x3c2274: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3c2274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c2278: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c2278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c227c: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C227Cu;
    SET_GPR_U32(ctx, 31, 0x3C2284u);
    ctx->pc = 0x3C2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C227Cu;
    // 0x3c2280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C227Cu, 0x3C2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2284u;
label_3c2284:
    // 0x3c2284: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2284u;
    {
        const bool branch_taken_0x3c2284 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2284u;
        // 0x3c2288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2284) {
            ctx->pc = 0x3C229Cu;
            goto label_3c229c;
        }
    }
    ctx->pc = 0x3C228Cu;
    // 0x3c228c: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x3c228cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c2290: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3c2290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3c2294: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3C2294u;
    {
        const bool branch_taken_0x3c2294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2294) {
            ctx->pc = 0x3C22D4u;
            goto label_3c22d4;
        }
    }
    ctx->pc = 0x3C229Cu;
label_3c229c:
    // 0x3c229c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3c229cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c22a0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c22a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c22a4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C22A4u;
    SET_GPR_U32(ctx, 31, 0x3C22ACu);
    ctx->pc = 0x3C22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C22A4u;
    // 0x3c22a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C22A4u, 0x3C22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C22ACu;
label_3c22ac:
    // 0x3c22ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C22ACu;
    {
        const bool branch_taken_0x3c22ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22ACu;
        // 0x3c22b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22ac) {
            ctx->pc = 0x3C22D0u;
            goto label_3c22d0;
        }
    }
    ctx->pc = 0x3C22B4u;
label_3c22b4:
    // 0x3c22b4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3c22b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c22b8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c22b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c22bc: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C22BCu;
    SET_GPR_U32(ctx, 31, 0x3C22C4u);
    ctx->pc = 0x3C22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C22BCu;
    // 0x3c22c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C22BCu, 0x3C22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C22C4u;
label_3c22c4:
    // 0x3c22c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c22c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c22c8: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C22C8u;
    {
        const bool branch_taken_0x3c22c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22C8u;
        // 0x3c22cc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22c8) {
            ctx->pc = 0x3C22E0u;
            goto label_3c22e0;
        }
    }
    ctx->pc = 0x3C22D0u;
label_3c22d0:
    // 0x3c22d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c22d4:
    // 0x3c22d4: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C22D4u;
    SET_GPR_U32(ctx, 31, 0x3C22DCu);
    ctx->pc = 0x3C22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C22D4u;
    // 0x3c22d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C22D4u, 0x3C22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C22DCu;
label_3c22dc:
    // 0x3c22dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c22dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c22e0:
    // 0x3c22e0: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x3c22e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3c22e4: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x3c22e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x3c22e8: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x3c22e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x3c22ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3c22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x3c22f0: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x3c22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x3c22f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3c22f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c22f8: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C22F8u;
    {
        const bool branch_taken_0x3c22f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22F8u;
        // 0x3c22fc: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22f8) {
            ctx->pc = 0x3C23B4u;
            goto label_3c23b4;
        }
    }
    ctx->pc = 0x3C2300u;
    // 0x3c2300: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x3c2300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x3c2304: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3c2304u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2308: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c230c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3c230cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2310: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x3c2310u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x3c2314: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c2314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c2318: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x3c2318u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x3c231c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3c231cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3c2320: 0xc0f1fd0  jal         func_3C7F40
    ctx->pc = 0x3C2320u;
    SET_GPR_U32(ctx, 31, 0x3C2328u);
    ctx->pc = 0x3C2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2320u;
    // 0x3c2324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7F40u, 0x3C2320u, 0x3C2328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2328u;
label_3c2328:
    // 0x3c2328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c232c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C232Cu;
    SET_GPR_U32(ctx, 31, 0x3C2334u);
    ctx->pc = 0x3C2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C232Cu;
    // 0x3c2330: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C232Cu, 0x3C2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2334u;
label_3c2334:
    // 0x3c2334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c2334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2338: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C2338u;
    SET_GPR_U32(ctx, 31, 0x3C2340u);
    ctx->pc = 0x3C233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2338u;
    // 0x3c233c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C2338u, 0x3C2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2340u;
label_3c2340:
    // 0x3c2340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2344: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x3c2344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x3c2348: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x3c2348u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3c234c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c234cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c2350: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x3c2350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x3c2354: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3c2354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c2358: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C2358u;
    {
        const bool branch_taken_0x3c2358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2358u;
        // 0x3c235c: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2358) {
            ctx->pc = 0x3C23A0u;
            goto label_3c23a0;
        }
    }
    ctx->pc = 0x3C2360u;
    // 0x3c2360: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x3c2360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x3c2364: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3c2364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3c2368: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c2368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c236c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3c236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3c2370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c2370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c2374: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x3c2374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x3c2378: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3c2378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x3c237c: 0x12c2feba  beq         $s6, $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x3C237Cu;
    {
        const bool branch_taken_0x3c237c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C237Cu;
        // 0x3c2380: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c237c) {
            ctx->pc = 0x3C1E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1e68;
        }
    }
    ctx->pc = 0x3C2384u;
    // 0x3c2384: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x3c2384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x3c2388: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3c2388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3c238c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3c238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3c2390: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3c2390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3c2394: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3c2394u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3c2398: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3C2398u;
    {
        const bool branch_taken_0x3c2398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2398u;
        // 0x3c239c: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2398) {
            ctx->pc = 0x3C2514u;
            goto label_3c2514;
        }
    }
    ctx->pc = 0x3C23A0u;
label_3c23a0:
    // 0x3c23a0: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x3c23a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x3c23a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3c23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3c23a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c23a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c23ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C23ACu;
    {
        const bool branch_taken_0x3c23ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23ACu;
        // 0x3c23b0: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c23ac) {
            ctx->pc = 0x3C2438u;
            goto label_3c2438;
        }
    }
    ctx->pc = 0x3C23B4u;
label_3c23b4:
    // 0x3c23b4: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x3c23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x3c23b8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x3c23b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3c23bc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3C23BCu;
    {
        const bool branch_taken_0x3c23bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c23bc) {
            ctx->pc = 0x3C2414u;
            goto label_3c2414;
        }
    }
    ctx->pc = 0x3C23C4u;
    // 0x3c23c4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3c23c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c23c8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c23c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c23cc: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C23CCu;
    SET_GPR_U32(ctx, 31, 0x3C23D4u);
    ctx->pc = 0x3C23D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23CCu;
    // 0x3c23d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C23CCu, 0x3C23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23D4u;
label_3c23d4:
    // 0x3c23d4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3C23D4u;
    {
        const bool branch_taken_0x3c23d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3c23d4) {
            ctx->pc = 0x3C2414u;
            goto label_3c2414;
        }
    }
    ctx->pc = 0x3C23DCu;
    // 0x3c23dc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3c23dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c23e0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c23e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c23e4: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C23E4u;
    SET_GPR_U32(ctx, 31, 0x3C23ECu);
    ctx->pc = 0x3C23E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23E4u;
    // 0x3c23e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C23E4u, 0x3C23ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23ECu;
label_3c23ec:
    // 0x3c23ec: 0xc0f5122  jal         func_3D4488
    ctx->pc = 0x3C23ECu;
    SET_GPR_U32(ctx, 31, 0x3C23F4u);
    ctx->pc = 0x3C23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23ECu;
    // 0x3c23f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4488u, 0x3C23ECu, 0x3C23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23F4u;
label_3c23f4:
    // 0x3c23f4: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C23F4u;
    SET_GPR_U32(ctx, 31, 0x3C23FCu);
    ctx->pc = 0x3C23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23F4u;
    // 0x3c23f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C23F4u, 0x3C23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23FCu;
label_3c23fc:
    // 0x3c23fc: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C23FCu;
    {
        const bool branch_taken_0x3c23fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23FCu;
        // 0x3c2400: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c23fc) {
            ctx->pc = 0x3C2414u;
            goto label_3c2414;
        }
    }
    ctx->pc = 0x3C2404u;
    // 0x3c2404: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c2404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2408: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C2408u;
    SET_GPR_U32(ctx, 31, 0x3C2410u);
    ctx->pc = 0x3C240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2408u;
    // 0x3c240c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C2408u, 0x3C2410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2410u;
label_3c2410:
    // 0x3c2410: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c2410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2414:
    // 0x3c2414: 0xc0f1fd0  jal         func_3C7F40
    ctx->pc = 0x3C2414u;
    SET_GPR_U32(ctx, 31, 0x3C241Cu);
    ctx->pc = 0x3C2418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2414u;
    // 0x3c2418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7F40u, 0x3C2414u, 0x3C241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C241Cu;
label_3c241c:
    // 0x3c241c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2420: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C2420u;
    SET_GPR_U32(ctx, 31, 0x3C2428u);
    ctx->pc = 0x3C2424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2420u;
    // 0x3c2424: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C2420u, 0x3C2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2428u;
label_3c2428:
    // 0x3c2428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c2428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c242c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C242Cu;
    SET_GPR_U32(ctx, 31, 0x3C2434u);
    ctx->pc = 0x3C2430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C242Cu;
    // 0x3c2430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C242Cu, 0x3C2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2434u;
label_3c2434:
    // 0x3c2434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2438:
    // 0x3c2438: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3c2438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c243c: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x3c243cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3c2440: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3c2440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c2444: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3c2444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3c2448: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c2448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c244c: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x3c244cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c2450: 0x14520031  bne         $v0, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x3C2450u;
    {
        const bool branch_taken_0x3c2450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3C2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2450u;
        // 0x3c2454: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2450) {
            ctx->pc = 0x3C2518u;
            goto label_3c2518;
        }
    }
    ctx->pc = 0x3C2458u;
    // 0x3c2458: 0xc0f48ea  jal         func_3D23A8
    ctx->pc = 0x3C2458u;
    SET_GPR_U32(ctx, 31, 0x3C2460u);
    ctx->pc = 0x3C245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2458u;
    // 0x3c245c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D23A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D23A8u, 0x3C2458u, 0x3C2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2460u;
label_3c2460:
    // 0x3c2460: 0xc0f498c  jal         func_3D2630
    ctx->pc = 0x3C2460u;
    SET_GPR_U32(ctx, 31, 0x3C2468u);
    ctx->pc = 0x3C2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2460u;
    // 0x3c2464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2630u, 0x3C2460u, 0x3C2468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2468u;
label_3c2468:
    // 0x3c2468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c246c: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C246Cu;
    SET_GPR_U32(ctx, 31, 0x3C2474u);
    ctx->pc = 0x3C2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C246Cu;
    // 0x3c2470: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C246Cu, 0x3C2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2474u;
label_3c2474:
    // 0x3c2474: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C2474u;
    {
        const bool branch_taken_0x3c2474 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2474u;
        // 0x3c2478: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2474) {
            ctx->pc = 0x3C2490u;
            goto label_3c2490;
        }
    }
    ctx->pc = 0x3C247Cu;
    // 0x3c247c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2480: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3c2480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3c2484: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3c2484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3c2488: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C2488u;
    {
        const bool branch_taken_0x3c2488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2488) {
            ctx->pc = 0x3C24E8u;
            goto label_3c24e8;
        }
    }
    ctx->pc = 0x3C2490u;
label_3c2490:
    // 0x3c2490: 0x3405ff7f  ori         $a1, $zero, 0xFF7F
    ctx->pc = 0x3c2490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x3c2494: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c2494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c2498: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x3c2498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x3c249c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c249cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c24a0: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x3c24a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x3c24a4: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c24a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c24a8: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x3c24a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x3c24ac: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C24ACu;
    SET_GPR_U32(ctx, 31, 0x3C24B4u);
    ctx->pc = 0x3C24B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C24ACu;
    // 0x3c24b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C24ACu, 0x3C24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C24B4u;
label_3c24b4:
    // 0x3c24b4: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x3C24B4u;
    {
        const bool branch_taken_0x3c24b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24B4u;
        // 0x3c24b8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24b4) {
            ctx->pc = 0x3C271Cu;
            goto label_3c271c;
        }
    }
    ctx->pc = 0x3C24BCu;
    // 0x3c24bc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3c24bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c24c0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3c24c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3c24c4: 0x34a5d6bf  ori         $a1, $a1, 0xD6BF
    ctx->pc = 0x3c24c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54975);
    // 0x3c24c8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c24c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c24cc: 0x34a52535  ori         $a1, $a1, 0x2535
    ctx->pc = 0x3c24ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9525);
    // 0x3c24d0: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C24D0u;
    SET_GPR_U32(ctx, 31, 0x3C24D8u);
    ctx->pc = 0x3C24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C24D0u;
    // 0x3c24d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C24D0u, 0x3C24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C24D8u;
label_3c24d8:
    // 0x3c24d8: 0x1c40008f  bgtz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3C24D8u;
    {
        const bool branch_taken_0x3c24d8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24D8u;
        // 0x3c24dc: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c24d8) {
            ctx->pc = 0x3C2718u;
            goto label_3c2718;
        }
    }
    ctx->pc = 0x3C24E0u;
    // 0x3c24e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C24E0u;
    {
        const bool branch_taken_0x3c24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c24e0) {
            ctx->pc = 0x3C2518u;
            goto label_3c2518;
        }
    }
    ctx->pc = 0x3C24E8u;
label_3c24e8:
    // 0x3c24e8: 0x3405ff3f  ori         $a1, $zero, 0xFF3F
    ctx->pc = 0x3c24e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65343);
    // 0x3c24ec: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c24ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c24f0: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x3c24f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x3c24f4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c24f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c24f8: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x3c24f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x3c24fc: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c24fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c2500: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x3c2500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x3c2504: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2504u;
    SET_GPR_U32(ctx, 31, 0x3C250Cu);
    ctx->pc = 0x3C2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2504u;
    // 0x3c2508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2504u, 0x3C250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C250Cu;
label_3c250c:
    // 0x3c250c: 0x4420083  bltzl       $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x3C250Cu;
    {
        const bool branch_taken_0x3c250c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3c250c) {
            ctx->pc = 0x3C2510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C250Cu;
            // 0x3c2510: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C271Cu;
            goto label_3c271c;
        }
    }
    ctx->pc = 0x3C2514u;
label_3c2514:
    // 0x3c2514: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3c2514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2518:
    // 0x3c2518: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C2518u;
    SET_GPR_U32(ctx, 31, 0x3C2520u);
    ctx->pc = 0x3C251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2518u;
    // 0x3c251c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C2518u, 0x3C2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2520u;
label_3c2520:
    // 0x3c2520: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3c2520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3c2524: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C2524u;
    SET_GPR_U32(ctx, 31, 0x3C252Cu);
    ctx->pc = 0x3C2528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2524u;
    // 0x3c2528: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C2524u, 0x3C252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C252Cu;
label_3c252c:
    // 0x3c252c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3c252cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3c2530: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C2530u;
    SET_GPR_U32(ctx, 31, 0x3C2538u);
    ctx->pc = 0x3C2534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2530u;
    // 0x3c2534: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C2530u, 0x3C2538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2538u;
label_3c2538:
    // 0x3c2538: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3c2538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c253c: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C253Cu;
    SET_GPR_U32(ctx, 31, 0x3C2544u);
    ctx->pc = 0x3C2540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C253Cu;
    // 0x3c2540: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C253Cu, 0x3C2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2544u;
label_3c2544:
    // 0x3c2544: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3c2544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3c2548: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3c2548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c254c: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C254Cu;
    SET_GPR_U32(ctx, 31, 0x3C2554u);
    ctx->pc = 0x3C2550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C254Cu;
    // 0x3c2550: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C254Cu, 0x3C2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2554u;
label_3c2554:
    // 0x3c2554: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x3c2554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3c2558: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x3c2558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3c255c: 0x24e5000c  addiu       $a1, $a3, 0xC
    ctx->pc = 0x3c255cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x3c2560: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c2560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3c2564: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3c2564u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3c2568: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x3c2568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3c256c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C256Cu;
    SET_GPR_U32(ctx, 31, 0x3C2574u);
    ctx->pc = 0x3C2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C256Cu;
    // 0x3c2570: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C256Cu, 0x3C2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2574u;
label_3c2574:
    // 0x3c2574: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x3c2574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3c2578: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c2578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c257c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2580: 0xc0f2068  jal         func_3C81A0
    ctx->pc = 0x3C2580u;
    SET_GPR_U32(ctx, 31, 0x3C2588u);
    ctx->pc = 0x3C2584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2580u;
    // 0x3c2584: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C81A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C81A0u, 0x3C2580u, 0x3C2588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2588u;
label_3c2588:
    // 0x3c2588: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3c2588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3c258c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2590: 0xc0f1e2c  jal         func_3C78B0
    ctx->pc = 0x3C2590u;
    SET_GPR_U32(ctx, 31, 0x3C2598u);
    ctx->pc = 0x3C2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2590u;
    // 0x3c2594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C78B0u, 0x3C2590u, 0x3C2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2598u;
label_3c2598:
    // 0x3c2598: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3c2598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x3c259c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3c259cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c25a0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C25A0u;
    {
        const bool branch_taken_0x3c25a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25A0u;
        // 0x3c25a4: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25a0) {
            ctx->pc = 0x3C25B8u;
            goto label_3c25b8;
        }
    }
    ctx->pc = 0x3C25A8u;
    // 0x3c25a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c25a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c25acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C25B0u;
    {
        const bool branch_taken_0x3c25b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25B0u;
        // 0x3c25b4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25b0) {
            ctx->pc = 0x3C25CCu;
            goto label_3c25cc;
        }
    }
    ctx->pc = 0x3C25B8u;
label_3c25b8:
    // 0x3c25b8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3c25b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3c25bc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3c25bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c25c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25c4: 0x39023  negu        $s2, $v1
    ctx->pc = 0x3c25c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3c25c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c25c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c25cc:
    // 0x3c25cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c25d0: 0x4820002  bltzl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C25D0u;
    {
        const bool branch_taken_0x3c25d0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3c25d0) {
            ctx->pc = 0x3C25D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C25D0u;
            // 0x3c25d4: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C25DCu;
            goto label_3c25dc;
        }
    }
    ctx->pc = 0x3C25D8u;
    // 0x3c25d8: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x3c25d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3c25dc:
    // 0x3c25dc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3c25dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c25e0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3c25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c25e4: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x3c25e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c25e8: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x3c25e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x3c25ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C25ECu;
    {
        const bool branch_taken_0x3c25ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25ECu;
        // 0x3c25f0: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25ec) {
            ctx->pc = 0x3C25FCu;
            goto label_3c25fc;
        }
    }
    ctx->pc = 0x3C25F4u;
    // 0x3c25f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C25F4u;
    {
        const bool branch_taken_0x3c25f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C25F4u;
        // 0x3c25f8: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c25f4) {
            ctx->pc = 0x3C2604u;
            goto label_3c2604;
        }
    }
    ctx->pc = 0x3C25FCu;
label_3c25fc:
    // 0x3c25fc: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x3c25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3c2600: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x3c2600u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3c2604:
    // 0x3c2604: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x3c2604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3c2608: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x3c2608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3c260c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3c260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2610: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x3c2610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c2614: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x3c2614u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x3c2618: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x3c2618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c261c: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x3c261cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x3c2620: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2620u;
    {
        const bool branch_taken_0x3c2620 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x3c2620) {
            ctx->pc = 0x3C2634u;
            goto label_3c2634;
        }
    }
    ctx->pc = 0x3C2628u;
    // 0x3c2628: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x3c2628u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x3c262c: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x3c262cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x3c2630: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x3c2630u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3c2634:
    // 0x3c2634: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3C2634u;
    {
        const bool branch_taken_0x3c2634 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3C2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2634u;
        // 0x3c2638: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2634) {
            ctx->pc = 0x3C2668u;
            goto label_3c2668;
        }
    }
    ctx->pc = 0x3C263Cu;
    // 0x3c263c: 0xc0f1ebc  jal         func_3C7AF0
    ctx->pc = 0x3C263Cu;
    SET_GPR_U32(ctx, 31, 0x3C2644u);
    ctx->pc = 0x3C2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C263Cu;
    // 0x3c2640: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7AF0u, 0x3C263Cu, 0x3C2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2644u;
label_3c2644:
    // 0x3c2644: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3c2644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x3c2648: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c2648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c264c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x3c264cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c2650: 0xc0f1e3a  jal         func_3C78E8
    ctx->pc = 0x3C2650u;
    SET_GPR_U32(ctx, 31, 0x3C2658u);
    ctx->pc = 0x3C2654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2650u;
    // 0x3c2654: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C78E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C78E8u, 0x3C2650u, 0x3C2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2658u;
label_3c2658:
    // 0x3c2658: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3c2658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c265c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2660: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C2660u;
    SET_GPR_U32(ctx, 31, 0x3C2668u);
    ctx->pc = 0x3C2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2660u;
    // 0x3c2664: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C2660u, 0x3C2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2668u;
label_3c2668:
    // 0x3c2668: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2668u;
    {
        const bool branch_taken_0x3c2668 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3C266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2668u;
        // 0x3c266c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2668) {
            ctx->pc = 0x3C2680u;
            goto label_3c2680;
        }
    }
    ctx->pc = 0x3C2670u;
    // 0x3c2670: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c2670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2674: 0xc0f1efc  jal         func_3C7BF0
    ctx->pc = 0x3C2674u;
    SET_GPR_U32(ctx, 31, 0x3C267Cu);
    ctx->pc = 0x3C2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2674u;
    // 0x3c2678: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7BF0u, 0x3C2674u, 0x3C267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C267Cu;
label_3c267c:
    // 0x3c267c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3c267cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3c2680:
    // 0x3c2680: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2680u;
    {
        const bool branch_taken_0x3c2680 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3C2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2680u;
        // 0x3c2684: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2680) {
            ctx->pc = 0x3C2698u;
            goto label_3c2698;
        }
    }
    ctx->pc = 0x3C2688u;
    // 0x3c2688: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3c2688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c268c: 0xc0f1ebc  jal         func_3C7AF0
    ctx->pc = 0x3C268Cu;
    SET_GPR_U32(ctx, 31, 0x3C2694u);
    ctx->pc = 0x3C2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C268Cu;
    // 0x3c2690: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7AF0u, 0x3C268Cu, 0x3C2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2694u;
label_3c2694:
    // 0x3c2694: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c2694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3c2698:
    // 0x3c2698: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2698u;
    {
        const bool branch_taken_0x3c2698 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2698u;
        // 0x3c269c: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2698) {
            ctx->pc = 0x3C26B0u;
            goto label_3c26b0;
        }
    }
    ctx->pc = 0x3C26A0u;
    // 0x3c26a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c26a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26a4: 0xc0f1efc  jal         func_3C7BF0
    ctx->pc = 0x3C26A4u;
    SET_GPR_U32(ctx, 31, 0x3C26ACu);
    ctx->pc = 0x3C26A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C26A4u;
    // 0x3c26a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7BF0u, 0x3C26A4u, 0x3C26ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C26ACu;
label_3c26ac:
    // 0x3c26ac: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c26acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3c26b0:
    // 0x3c26b0: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C26B0u;
    {
        const bool branch_taken_0x3c26b0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3C26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26B0u;
        // 0x3c26b4: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c26b0) {
            ctx->pc = 0x3C26C8u;
            goto label_3c26c8;
        }
    }
    ctx->pc = 0x3C26B8u;
    // 0x3c26b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c26b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26bc: 0xc0f1efc  jal         func_3C7BF0
    ctx->pc = 0x3C26BCu;
    SET_GPR_U32(ctx, 31, 0x3C26C4u);
    ctx->pc = 0x3C26C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C26BCu;
    // 0x3c26c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7BF0u, 0x3C26BCu, 0x3C26C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C26C4u;
label_3c26c4:
    // 0x3c26c4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3c26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_3c26c8:
    // 0x3c26c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3c26c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c26cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c26ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26d0: 0xc0f1f6c  jal         func_3C7DB0
    ctx->pc = 0x3C26D0u;
    SET_GPR_U32(ctx, 31, 0x3C26D8u);
    ctx->pc = 0x3C26D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C26D0u;
    // 0x3c26d4: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7DB0u, 0x3C26D0u, 0x3C26D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C26D8u;
label_3c26d8:
    // 0x3c26d8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3c26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3c26dc: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3c26dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3c26e0: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x3c26e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3c26e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c26e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26e8: 0xc0f1f52  jal         func_3C7D48
    ctx->pc = 0x3C26E8u;
    SET_GPR_U32(ctx, 31, 0x3C26F0u);
    ctx->pc = 0x3C26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C26E8u;
    // 0x3c26ec: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7D48u, 0x3C26E8u, 0x3C26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C26F0u;
label_3c26f0:
    // 0x3c26f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c26f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26f4: 0x4e1fe83  bgez        $a3, . + 4 + (-0x17D << 2)
    ctx->pc = 0x3C26F4u;
    {
        const bool branch_taken_0x3c26f4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x3c26f4) {
            ctx->pc = 0x3C2104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2104;
        }
    }
    ctx->pc = 0x3C26FCu;
    // 0x3c26fc: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C26FCu;
    {
        const bool branch_taken_0x3c26fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C26FCu;
        // 0x3c2700: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c26fc) {
            ctx->pc = 0x3C271Cu;
            goto label_3c271c;
        }
    }
    ctx->pc = 0x3C2704u;
    // 0x3c2704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c2704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2708: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3c2708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3c270c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3c270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3c2710: 0x1040fe71  beqz        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x3C2710u;
    {
        const bool branch_taken_0x3c2710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2710u;
        // 0x3c2714: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2710) {
            ctx->pc = 0x3C20D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c20d8;
        }
    }
    ctx->pc = 0x3C2718u;
label_3c2718:
    // 0x3c2718: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3c2718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c271c:
    // 0x3c271c: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C271Cu;
    SET_GPR_U32(ctx, 31, 0x3C2724u);
    ctx->pc = 0x3C2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C271Cu;
    // 0x3c2720: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C271Cu, 0x3C2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2724u;
label_3c2724:
    // 0x3c2724: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3c2724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3c2728: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C2728u;
    SET_GPR_U32(ctx, 31, 0x3C2730u);
    ctx->pc = 0x3C272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2728u;
    // 0x3c272c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C2728u, 0x3C2730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2730u;
label_3c2730:
    // 0x3c2730: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3c2730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3c2734: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C2734u;
    SET_GPR_U32(ctx, 31, 0x3C273Cu);
    ctx->pc = 0x3C2738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2734u;
    // 0x3c2738: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C2734u, 0x3C273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C273Cu;
label_3c273c:
    // 0x3c273c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3c273cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3c2740: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C2740u;
    SET_GPR_U32(ctx, 31, 0x3C2748u);
    ctx->pc = 0x3C2744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2740u;
    // 0x3c2744: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C2740u, 0x3C2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2748u;
label_3c2748:
    // 0x3c2748: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3c2748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c274c: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C274Cu;
    SET_GPR_U32(ctx, 31, 0x3C2754u);
    ctx->pc = 0x3C2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C274Cu;
    // 0x3c2750: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C274Cu, 0x3C2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2754u;
label_3c2754:
    // 0x3c2754: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3c2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3c2758:
    // 0x3c2758: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C2758u;
    {
        const bool branch_taken_0x3c2758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2758) {
            ctx->pc = 0x3C275Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2758u;
            // 0x3c275c: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2760u;
            goto label_3c2760;
        }
    }
    ctx->pc = 0x3C2760u;
label_3c2760:
    // 0x3c2760: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x3c2760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3c2764: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2764u;
    {
        const bool branch_taken_0x3c2764 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2764u;
        // 0x3c2768: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2764) {
            ctx->pc = 0x3C2778u;
            goto label_3c2778;
        }
    }
    ctx->pc = 0x3C276Cu;
    // 0x3c276c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c276cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2770: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C2770u;
    SET_GPR_U32(ctx, 31, 0x3C2778u);
    ctx->pc = 0x3C2774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2770u;
    // 0x3c2774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C2770u, 0x3C2778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2778u;
label_3c2778:
    // 0x3c2778: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3c2778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3c277c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3c277cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3c2780: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3c2780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3c2784: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3c2784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3c2788: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3c2788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c278c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3c278cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c2790: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3c2790u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c2794: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c2794u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c2798: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3c2798u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c279c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c279cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c27a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C27A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27A0u;
        // 0x3c27a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C27A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C27A8u;
}
