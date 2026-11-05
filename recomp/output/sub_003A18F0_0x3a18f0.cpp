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

// Function: sub_003A18F0
// Address: 0x3a18f0 - 0x3a19a8
void sub_003A18F0_0x3a18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A18F0_0x3a18f0");
#endif

    switch (ctx->pc) {
        case 0x3a1968u: goto label_3a1968;
        default: break;
    }

    ctx->pc = 0x3a18f0u;

    // 0x3a18f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a18f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a18f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a18f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a18fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a18fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1900: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a1900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a1904: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x3a1904u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a1908: 0x54a20023  bnel        $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A1908u;
    {
        const bool branch_taken_0x3a1908 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1908) {
            ctx->pc = 0x3A190Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1908u;
            // 0x3a190c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1998u;
            goto label_3a1998;
        }
    }
    ctx->pc = 0x3A1910u;
    // 0x3a1910: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3a1910u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a1914: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1914u;
    {
        const bool branch_taken_0x3a1914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1914u;
        // 0x3a1918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1914) {
            ctx->pc = 0x3A1930u;
            goto label_3a1930;
        }
    }
    ctx->pc = 0x3A191Cu;
    // 0x3a191c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a191cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a1920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1924: 0x80e846e  j           func_3A11B8
    ctx->pc = 0x3A1924u;
    ctx->pc = 0x3A1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1924u;
    // 0x3a1928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A11B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A11B8u, 0x3A1924u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A192Cu;
    // 0x3a192c: 0x0  nop
    ctx->pc = 0x3a192cu;
    // NOP
label_3a1930:
    // 0x3a1930: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A1930u;
    {
        const bool branch_taken_0x3a1930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1930) {
            ctx->pc = 0x3A1934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1930u;
            // 0x3a1934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1998u;
            goto label_3a1998;
        }
    }
    ctx->pc = 0x3A1938u;
    // 0x3a1938: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x3a1938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3a193c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A193Cu;
    {
        const bool branch_taken_0x3a193c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a193c) {
            ctx->pc = 0x3A1940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A193Cu;
            // 0x3a1940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1998u;
            goto label_3a1998;
        }
    }
    ctx->pc = 0x3A1944u;
    // 0x3a1944: 0x8e021958  lw          $v0, 0x1958($s0)
    ctx->pc = 0x3a1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6488)));
    // 0x3a1948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1948u;
    {
        const bool branch_taken_0x3a1948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1948) {
            ctx->pc = 0x3A1960u;
            goto label_3a1960;
        }
    }
    ctx->pc = 0x3A1950u;
    // 0x3a1950: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A1950u;
    {
        const bool branch_taken_0x3a1950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3A1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1950u;
        // 0x3a1954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1950) {
            ctx->pc = 0x3A1988u;
            goto label_3a1988;
        }
    }
    ctx->pc = 0x3A1958u;
    // 0x3a1958: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A1958u;
    {
        const bool branch_taken_0x3a1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1958u;
        // 0x3a195c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1958) {
            ctx->pc = 0x3A199Cu;
            goto label_3a199c;
        }
    }
    ctx->pc = 0x3A1960u;
label_3a1960:
    // 0x3a1960: 0xc0e84de  jal         func_3A1378
    ctx->pc = 0x3A1960u;
    SET_GPR_U32(ctx, 31, 0x3A1968u);
    ctx->pc = 0x3A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1378u, 0x3A1960u, 0x3A1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1968u;
label_3a1968:
    // 0x3a1968: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a1968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a196c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A196Cu;
    {
        const bool branch_taken_0x3a196c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a196c) {
            ctx->pc = 0x3A1970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A196Cu;
            // 0x3a1970: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1998u;
            goto label_3a1998;
        }
    }
    ctx->pc = 0x3A1974u;
    // 0x3a1974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a197c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a197cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1980: 0x80e84de  j           func_3A1378
    ctx->pc = 0x3A1980u;
    ctx->pc = 0x3A1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1980u;
    // 0x3a1984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1378u;
    sub_003A1378_0x3a1378(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1988u;
label_3a1988:
    // 0x3a1988: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a1988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a198c: 0x80e85f0  j           func_3A17C0
    ctx->pc = 0x3A198Cu;
    ctx->pc = 0x3A1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A198Cu;
    // 0x3a1990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17C0u, 0x3A198Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A1994u;
    // 0x3a1994: 0x0  nop
    ctx->pc = 0x3a1994u;
    // NOP
label_3a1998:
    // 0x3a1998: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a1998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a199c:
    // 0x3a199c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A199Cu;
        // 0x3a19a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A199Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A19A4u;
    // 0x3a19a4: 0x0  nop
    ctx->pc = 0x3a19a4u;
    // NOP
    ctx->pc = 0x3a19a8u;
}
